%option noyywrap
%{
	#include "grammar.tab.h"
%}

COLONG [:]
DIGIT -?[0-9]
ALPHA [a-zA-Z]
CHARACTERS_BLOCK {QUOTES}({DOT}*{COLONG}*{ALPHA}*{WHITESPACE}*{DIGIT}*)+{QUOTES}
NAME {ALPHA}([0-9]*{ALPHA}*)+
WHITESPACE [ \r\t\v\f]
LINEFEED \n
SINGLECOMMENT {LESS}{PLUS}({DOT}*{WHITESPACE}*)+{LINEFEED}+{PLUS}{GREATHER}
MULTILINECOMMENTS {LESS}{PLUS}({DOT}*{WHITESPACE}*{LINEFEED}*)+{PLUS}{GREATHER}
DOT .
SLASH[/]
WILDCARD [*]
QUOTES [\"]
LESS [<]
GREATHER [>]
PLUS [+]
MINUS [-]

%%

"/"	{ return SLASH; }
"\\"	{ return BSLASH; }
"["	{ return LEFT_BRACKET; }
"]"	{ return RIGHT_BRACKET; }
"?"	{ return QUESTION_SIGN; }
"|"	{ return PIPE;}
"="	{ return EQUAL; }
"<="	{ return LESS_EQUAL; }
"<"	{ return LESS_THAN; }
">"	{ return GREATHER_THAN; }
">="	{ return GREATHER_EQUAL; }
"!="	{ return NOT_EQUAL; }
"itob"	{ return ITOB; }
"+:"	{ return INC; }
"-:"	{ return DECR; }
"load"	{ return LOAD; }
"show"	{ return SHOW; }	
"Int"	{ return INT; }
"Bln"	{ return BLN; }
"Str"	{ return STR; }
"Dec"	{ return DEC; }
"tru"	{ return TRU; }
"fls"	{ return FLS; }
"answer:0;"	{ return ANSWER; }
{DIGIT}+ { return INTEGER_VALUE; }
{DIGIT}+{DOT}{DIGIT}+ { return DECIMAL_VALUE; }
{NAME}	{ return NAME;}
{CHARACTERS_BLOCK} { return CHARACTERS_BLOCK; }
{QUOTES} { return QUOTES; }
{SINGLECOMMENT}	{ return SINGLECOMMENT; }
{MULTILINECOMMENTS}	{ return MULTILINECOMMENTS; }
":"	{ return COLON; }
"::"	{ return DOUBLE_COLON; }
";"	{ return SEMICOLON; }
"->"	{ return RIGHT_ARROW; }
"{"	{ return LEFT_CURLY_BRACE; }
"}"	{ return RIGHT_CURLY_BRACE; }
"("	{ return LEFT_PARENTHESIS; }
")"	{ return RIGHT_PARENTHESIS; }
"$"	{ return PESOS_SIGN; }
","	{ return COMMA; }
"@"	{ return AT; }
"+"	{ return PLUS; }
"-"	{ return MINUS; }
{WHITESPACE}
{LINEFEED}	++yylineno;

%%

#include <stdio.h>
