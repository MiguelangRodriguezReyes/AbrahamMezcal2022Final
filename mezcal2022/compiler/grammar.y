%code requires {
	#include <string>
}
%{
	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <iostream>
	#include <memory>
	#include <string>
	using namespace std;
	extern char *yytext;
	std::string result;
	int yylex(void);	
	void yyerror(char const *);
%}

%define api.value.type { std::string }

%token  NAME COLON RIGHT_ARROW LEFT_CURLY_BRACE RIGHT_CURLY_BRACE SEMICOLON LEFT_PARENTHESIS RIGHT_PARENTHESIS SINGLECOMMENT 
	MULTILINECOMMENTS SHOW QUOTES CHARACTERS_BLOCK INT INTEGER_VALUE DECIMAL_VALUE LOAD STDIN PESOS_SIGN 
	INC DECR DEC BLN SET TRU FLS ITOB QUESTION_SIGN LEFT_BRACKET RIGHT_BRACKET EQUAL LESS_EQUAL LESS_THAN 
	GREATHER_THAN GREATHER_EQUAL NOT_EQUAL PIPE COMMA STR DOUBLE_COLON AT ANSWER PLUS BSLASH MINUS SLASH
%start input

%%

input:
	function function_list	{ result = std::string("#include <cstdio>\n #include <iostream>\n using namespace std;\n") + $1 + $2; }
	;

function_list:
	function function_list                  { $$ = $1 + $2; }
	|
	%empty					{ $$ = ""; }
	;

function:
	name DOUBLE_COLON LEFT_BRACKET RIGHT_BRACKET RIGHT_ARROW LEFT_BRACKET INT RIGHT_BRACKET COLON LEFT_CURLY_BRACE statements ANSWER 		RIGHT_CURLY_BRACE    
	{ 
		if($1 == "main"){
			$$ = "int main(int argc, char *argv[]){\n" + $11 + "\n}\n";
		}else{
			$$ = std::string("\n void ") + "_" + $1 + "()" + "{\n" + $11 + "\n}\n";
		} 
	}
	|
	%empty					{ $$ = ""; }
	;

statements:
	statements statement { 
				$$ = $1 + $2;
				}
	|
	%empty					{ $$ = ""; }
	;

statement:
	bifurcation { $$ = $1; }
	|
	loop { $$ = $1; }
	|
	assignment SEMICOLON { $$ = $1; }
	|
	unitaryOperations SEMICOLON { $$ = $1; }
	|
	std_input SEMICOLON { $$ = $1; }
	|
	definition SEMICOLON { $$ = $1; }
	|
	std_output SEMICOLON { $$ = $1; }
	|
	MULTILINECOMMENTS	{ $$ = ""; }
	|
	SINGLECOMMENT	{ $$ = ""; }
	|
	expression SEMICOLON { $$ = $1; }
	;

bifurcation:
	
	LEFT_BRACKET logical_eval RIGHT_BRACKET QUESTION_SIGN statement { $$ = "if(" + $2 + "){\n\t" + $5 + "}\n"; }
	|
	LEFT_BRACKET logical_eval RIGHT_BRACKET QUESTION_SIGN LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE { $$ = "if(" + $2 + "){\n\t" + $6 + "}\n"; }
	|
	PIPE LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE { $$ = "else{\n\t" + $3 + "\n}\n";}
	|
	LEFT_BRACKET logical_eval RIGHT_BRACKET PIPE QUESTION_SIGN LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE { $$ = "else if(" + $2 + "){\n\t" + $7 + "}\n"; }
	;
	
loop:

	LEFT_BRACKET logical_eval RIGHT_BRACKET AT LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE { $$ = "while(" + $2 + "){\n" + $6 +"}\n"; }
	|
	LEFT_BRACKET name COLON integer_value BSLASH PESOS_SIGN name comp_operator integer_value BSLASH name COLON PESOS_SIGN name PLUS integer_value RIGHT_BRACKET AT LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE
	{ $$ = "for(int " + $2 + "=" + $4 +  ";" + $7 + $8 + $9 +";" + $11 + "=" + $14 + "+" + $16 + "){\n\t" + $20 + "}\n"; }
	|
	LEFT_BRACKET name COLON integer_value BSLASH PESOS_SIGN name comp_operator integer_value BSLASH name COLON PESOS_SIGN name MINUS integer_value RIGHT_BRACKET AT LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE
	{ $$ = "for(int " + $2 + "=" + $4 +  ";" + $7 + $8 + $9 +";" + $11 + "=" + $14 + "-" + $16 + "){\n\t" + $20 + "}\n"; }
	|
	LEFT_BRACKET name COLON integer_value BSLASH PESOS_SIGN name comp_operator PESOS_SIGN name BSLASH name COLON PESOS_SIGN name PLUS integer_value RIGHT_BRACKET AT LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE
	{ $$ = "for(int " + $2 + "=" + $4 +  ";" + $7 + $8 + $10 +";" + $12 + "=" + $15 + "+" + $17 + "){\n\t" + $21 + "}\n"; }
	|
	LEFT_BRACKET name COLON integer_value BSLASH PESOS_SIGN name comp_operator PESOS_SIGN name BSLASH name COLON PESOS_SIGN name MINUS integer_value RIGHT_BRACKET AT LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE
	{ $$ = "for(int " + $2 + "=" + $4 +  ";" + $7 + $8 + $10 +";" + $12 + "=" + $15 + "-" + $17 + "){\n\t" + $21 + "}\n"; }
	|
	LEFT_BRACKET name COLON PESOS_SIGN name BSLASH PESOS_SIGN name comp_operator integer_value BSLASH name COLON PESOS_SIGN name PLUS integer_value RIGHT_BRACKET AT LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE
        { $$ = "for(int " + $2 + "=" + $5 +  ";" + $8 + $9 + $10 + ";" + $12 + "=" + $15 + "+" + $17 + "){\n\t" + $21 + "}\n"; }
	;

logical_eval:
	PESOS_SIGN name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET comp_operator PESOS_SIGN name 
	{ $$ = $2 + "[" + $5 + "]" + $7 + $9; }
	|
	PESOS_SIGN name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET comp_operator PESOS_SIGN name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET
	{ $$ = $2 + "[" + $5 + "]" + $7 + $9 + "[" + $12 + "]"; } 
	|
	PESOS_SIGN name comp_operator integer_value { $$ = $2 + $3 + $4; }
	|
	integer_value comp_operator integer_value { $$ = $1 + $2 + $3; }
	|
	PESOS_SIGN name comp_operator PESOS_SIGN name { $$ = $2 + $3 + $5; }
	;

comp_operator:
	EQUAL	{ $$ = "=="; }
	|
	LESS_EQUAL	{ $$ = "<="; }
	|
	LESS_THAN{ $$ = "<"; }
	|
	GREATHER_THAN	{ $$ = ">"; }
	|
	GREATHER_EQUAL	{ $$ = ">="; }
	|
	NOT_EQUAL	{ $$ = "!="; }
	;

assignment:	
	name COLON PESOS_SIGN name SLASH decimal_value { $$ = $1 + "=" + "(float)" + $4 + "/" + $6 + ";\n"; } 
	|
	name COLON LEFT_BRACKET integer_value COMMA integer_value RIGHT_BRACKET { $$ = $1 + "[" + $4 + "]" + "=" + $6 + ";\n"; }
	|
	name COLON LEFT_BRACKET PESOS_SIGN name COMMA PESOS_SIGN name RIGHT_BRACKET { $$ = $1 + "[" + $5 + "]" + "=" + $8 + ";\n"; }
	|
	name COLON LEFT_BRACKET integer_value COMMA PESOS_SIGN name RIGHT_BRACKET { $$ = $1 + "[" + $4 + "]" + "=" + $7 + ";\n"; }
	|
	name COLON LEFT_BRACKET PESOS_SIGN name COMMA integer_value RIGHT_BRACKET { $$ = $1 + "[" + $5 + "]" + "=" + $7 + ";\n"; }
	|
	name COLON PESOS_SIGN name LEFT_BRACKET integer_value RIGHT_BRACKET { $$ = $1 + "=" + $4 + "[" + $6 + "]" + ";\n"; }
	|
	name COLON PESOS_SIGN name LEFT_BRACKET PESOS_SIGN ids RIGHT_BRACKET { $$ = $1 + "=" + $4 + "[" + $7 + "]" + ";\n"; }
	|
	name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET COLON PESOS_SIGN name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET
	{ $$ = $1 + "[" + $4 + "]" + "=" + $8 + "[" + $11 + "]" + ";\n"; }
	|
	name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET COLON PESOS_SIGN name  
	{ $$ = $1 + "[" + $4 + "]" + "=" + $8 + ";\n"; }
	|
	name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET COLON integer_value
	{ $$ = $1 + "[" + $4 + "]" + "=" + $7 + ";\n"; }
	|
	name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET INC integer_value
        { $$ = $1 + "[" + $4 + "]" + "+=" + $7 + ";\n"; }
	|
	name INC PESOS_SIGN name LEFT_BRACKET PESOS_SIGN name RIGHT_BRACKET
	{ $$ = $1 + "+=" + $4 + "[" + $7 + "]" + ";\n"; }
	|
	name COLON FLS  { $$ = $1 + "= false; \n"; }
	|
	name COLON TRU	{ $$ = $1 + "= true; \n"; }
	|
	name COLON integer_value { $$ = $1 + "=" + $3 + ";\n";}
	|
	name COLON decimal_value { $$ = $1 + "=" + $3 + ";\n";}
	|
	name COLON characters_block {$$ = $1 + "=" + $3 + ";\n";}
	|
	name INC integer_value { $$ = $1 + "+=" + $3 + ";\n";}
	|
	name DECR integer_value { $$ = $1 + "-=" + $3 + ";\n";}
	|
	name COLON PESOS_SIGN name { $$ = $1 + "=" + $4 + ";\n";}
	|
	name COLON PESOS_SIGN name PLUS integer_value { $$ = $1 + "=" + $4 + "+" + $6 + ";\n";}
	|
	name COLON PESOS_SIGN name MINUS integer_value { $$ = $1 + "=" + $4 + "-" + $6 + ";\n";}
	;
	
integer_value:
	INTEGER_VALUE { $$ = std::string(yytext); }
	;
	
decimal_value:
	DECIMAL_VALUE { $$ = std::string(yytext); }
	;

unitaryOperations:
	INC identifiers	{ $$ = $2 + "++;\n";}
	|
	DECR identifiers { $$ = $2 + "--;\n";}
	;

std_input:
	LOAD COLON name { $$ = "\t cin >> " + $3 + ";\n"; }
	;

definition:
	name COLON INT LEFT_BRACKET integer_value RIGHT_BRACKET {
	
		$$ = "int " + $1 + "[" + $5 + "];\n";
	}
	|
	name COLON INT LEFT_BRACKET PESOS_SIGN ids RIGHT_BRACKET {
	
		$$ = "int " + $1 + "[" + $6 + "];\n";
	
	}
	|
	name DOUBLE_COLON BLN { $$ = "\t bool " + $1 + ";\n"; }
	|
	name DOUBLE_COLON INT { $$ = "\t int " + $1 + ";\n"; }
	|
	ids COMMA ids COMMA ids COLON INT { $$ = "\t int " + $1 + "," + $3 + "," + $5 + ";\n"; }
	|
	name DOUBLE_COLON STR { $$ = "\t string " + $1 + ";\n";}
	|
	name DOUBLE_COLON DEC { $$ = "\t float " + $1 + ";\n";}
	;
	
identifiers:
	identifiers ids	{ $$ = $1 + $2; }
	|
	%empty	{ $$ = ""; }
	;

ids:
	name	{ $$ = $1; }
	;

std_output:
	SHOW COLON ITOB PESOS_SIGN name	{ $$ = "\t cout << ((" + $5 + "==1) ? \"true\" : \"false\") << endl;"; }
	|
	SHOW COLON characters_block	{ $$ = "\t cout << " + $3 + " << endl;\n"; }
	|
	SHOW COLON PESOS_SIGN name	{ $$ = "\t cout << " + $4 + " << endl;\n"; }
	|
	SHOW COLON characters_block COMMA PESOS_SIGN name { $$ = "\t cout << " + $3 + " << " + $6 + " << endl;\n"; }
	|
	SHOW COLON characters_block COMMA PESOS_SIGN name COMMA characters_block{ $$ = "\t cout << " + $3 + " << " + $6 + " << " + $8 + " << endl;\n"; }
	|
	SHOW COLON PESOS_SIGN ids COMMA integer_value { $$ = "\t cout << " + $4 + "[" + $6 + "]  << endl;\n"; }
	|
	SHOW COLON PESOS_SIGN ids COMMA PESOS_SIGN ids { $$ = "cout << " + $4 + "[" + $7 + "]  << endl;\n"; }
	;
	
expression:
	name LEFT_PARENTHESIS RIGHT_PARENTHESIS	{ $$ = std::string("\t _") + $1 + "();\n"; }
	;

characters_block: 
	CHARACTERS_BLOCK { $$ = std::string(yytext); }
	;

name:
	NAME    {  
			$$ = std::string(yytext);
		}
	;

%%

void yyerror (char const *x){
	printf ("Error %s \n", x);
	exit(1);
}
