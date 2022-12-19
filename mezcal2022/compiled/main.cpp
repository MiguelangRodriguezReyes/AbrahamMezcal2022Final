#include <cstdio>
 #include <iostream>
 using namespace std;
int main(int argc, char *argv[]){
	 int Opt;
	 cout << "\n <************** LENGUAJES Y AUTÓMATAS II **************> \n" << endl;
	 cout << "\n <************** (._.) MENÚ (._.) **************> \n" << endl;
	 cout << "◔_◔ Número menor y mayor." << endl;
	 cout << "◔_◔ Ordenar arreglo de 10 números." << endl;
	 cout << "◔_◔ Calcular la media, mediana y moda de 10 números." << endl;
	 cout << "◔_◔ Discos." << endl;
	 cout << "ಥ_ಥ Salir\n" << endl;
	 cout << "Selecciona una opción: " << endl;
	 cin >> Opt;
while(Opt!=5){
if(Opt==1){
		 int R,num,greather;
	 int Totaln;
	 int less;
	 cout << "Cuantos números deseas ingresar?" << endl;
	 cin >> Totaln;
R=1;
greather=0;
less=0;
while(R<=Totaln){
	 cout << "\nIngresa un número: " << endl;
	 cin >> num;
if(R==1){
	greather=num;
less=num;
}
else if(num>greather){
	greather=num;
}
else if(num<less){
	less=num;
}
R+=1;
}
	 cout << "\nEl número mayor es: " << greather << endl;
	 cout << "\nEl número menor es: " << less << endl;
	 cout << "" << endl;
}
else if(Opt==2){
		 int less;
	 int num;
	 int temp;
int Arreglo[10];
	 cout << "Ingresa 10 números: \n" << endl;
for(int i=0;i<=9;i=i+1){
		 cout << "Ingresa un número: " << endl;
	 cin >> num;
Arreglo[i]=num;
}
	 cout << " " << endl;
for(int j=0;j<=9;j=j+1){
		 int n;
n=j+1;
for(int t=0;t<=8;t=t+1){
	if(Arreglo[t]<Arreglo[n]){
	temp=Arreglo[n];
Arreglo[n]=Arreglo[t];
Arreglo[t]=temp;
}
}
}
	 cout << " " << endl;
	 cout << "Arreglo ordenado" << endl;
	 cout << " " << endl;
for(int t=9;t>=0;t=t-1){
	cout << Arreglo[t]  << endl;
}
}
else if(Opt==3){
		 int Opt2;
	 cout << "\n<********MENÚ********>\n" << endl;
	 cout << "ʘ‿ʘ Calcular la moda." << endl;
	 cout << "ʘ‿ʘ Calcular la mediana." << endl;
	 cout << "ʘ‿ʘ Calcular la media." << endl;
	 cout << "ಥ_ಥ Regresar al menú principal.\n" << endl;
	 cout << "Elige una opción: " << endl;
	 cin >> Opt2;
while(Opt2!=4){
if(Opt2==1){
	int Arreglo[10];
int Auxi[10];
	 int Conta;
	 int Posicion;
	 int Numero;
	 int Conta2;
	 int greatherPos;
	 int Num;
	 int NumGreather;
	 int Q;
Q=0;
	 cout << "Ingresa 10 números \n" << endl;
for(int i=0;i<10;i=i+1){
		 cout << "Ingresa un número" << endl;
	 cin >> Num;
Arreglo[i]=Num;
}
for(int Conta=0;Conta<=9;Conta=Conta+1){
	Auxi[Conta]=0;
}
for(int Conta=0;Conta<10;Conta=Conta+1){
	Numero=Arreglo[Conta];
Posicion=Conta;
for(int Conta2=Conta;Conta2<=9;Conta2=Conta2+1){
	if(Arreglo[Conta2]==Numero){
	Auxi[Posicion]+=1;
}
}
}
NumGreather=Auxi[Q];
greatherPos=0;
for(int Conta=0;Conta<=9;Conta=Conta+1){
	if(Auxi[Conta]>NumGreather){
	greatherPos=Conta;
NumGreather=Auxi[Conta];
}
}
	 cout << "\nResultado de la moda: " << endl;
cout << Arreglo[greatherPos]  << endl;
}
else if(Opt2==2){
	int Arreglo[10];
	 int Flg;
	 int temp;
Flg=0;
	 int nu;
	 int Num;
	 cout << "Ingresa 10 números\n" << endl;
for(int i=0;i<10;i=i+1){
		 cout << "Ingresa un número: " << endl;
	 cin >> Num;
Arreglo[i]=Num;
}
for(int j=0;j<=9;j=j+1){
		 int nu;
nu=j+1;
for(int t=0;t<=8;t=t+1){
	if(Arreglo[t]<Arreglo[nu]){
	temp=Arreglo[nu];
Arreglo[nu]=Arreglo[t];
Arreglo[t]=temp;
}
}
}
	 cout << " " << endl;
	 cout << "Números ingresados" << endl;
	 cout << " " << endl;
for(int t=9;t>=0;t=t-1){
	cout << Arreglo[t]  << endl;
}
	 cout << "\nResultado de la mediana: " << endl;
	 cout << Arreglo[5]  << endl;
	 cout << "y" << endl;
	 cout << Arreglo[4]  << endl;
}
else if(Opt2==3){
	int Arreglo[10];
	 int suma;
	 int numb;
	 float media;
media=0;
suma=0;
numb=0;
	 cout << "Ingresa 10 números\n" << endl;
for(int i=0;i<=9;i=i+1){
		 cout << "Ingresa un número: " << endl;
	 cin >> numb;
Arreglo[i]=numb;
}
	 cout << " " << endl;
for(int Conta=0;Conta<=9;Conta=Conta+1){
	suma+=Arreglo[Conta];
}
media=(float)suma/10.0;
	 cout << "Resultado de la media: " << media << endl;
}
else{
		 cout << "\nError\n" << endl;

}
	 cout << "\n<******** MENÚ ********>\n" << endl;
	 cout << "ʘ‿ʘ Calcular la moda." << endl;
	 cout << "ʘ‿ʘ Calcular la mediana." << endl;
	 cout << "ʘ‿ʘ Calcular la media." << endl;
	 cout << "ಥ_ಥ Regresar al menú principal.\n" << endl;
	 cout << "Elige una opción: " << endl;
	 cin >> Opt2;
}
}
else if(Opt==4){
		 int R,numDisco,masEscuchado;
	 int Totaln;
	 int menosEscuchado;
	 cout << "Cuantos discos deseas ingresar?" << endl;
	 cin >> Totaln;
R=1;
masEscuchado=0;
menosEscuchado=0;
while(R<=Totaln){
	 cout << "\nIngresa un disco: " << endl;
	 cin >> numDisco;
if(R==1){
	masEscuchado=numDisco;
menosEscuchado=numDisco;
}
else if(numDisco>masEscuchado){
	masEscuchado=numDisco;
}
else if(numDisco<menosEscuchado){
	menosEscuchado=numDisco;
}
R+=1;
}
	 cout << "\nEl disco más escuchado es el: " << masEscuchado << endl;
	 cout << "\nEl disco menos escuchado es el: " << menosEscuchado << endl;
	 cout << "" << endl;
}
else{
		 cout << "\nError\n" << endl;

}
	 cout << "\n <************** LENGUAJES Y AUTÓMATAS II **************> \n" << endl;
	 cout << "\n <************** (._.) MENÚ (._.) **************> \n" << endl;
	 cout << "◔_◔ Número menor y mayor." << endl;
	 cout << "◔_◔ Arreglo ordenado de 10 números." << endl;
	 cout << "◔_◔ Calcular la media, mediana y moda de 10 números." << endl;
	 cout << "◔_◔ Discos." << endl;
	 cout << "ಥ_ಥ Salir.\n" << endl;
	 cout << "Selecciona una opción: " << endl;
	 cin >> Opt;
}

}

