#include <iostream>

using namespace std;

double GetNumeroPositivo();
double GetPerimetro(double, double);

int main (){
	cout<<"Este programa calculara el perimetro de un rectangulo\n\n";
	cout<<"Ingrese la medida de la altura del rectangulo: ";
	double h=GetNumeroPositivo();
	cout<<"Ahora ingrese la medida de la base: ";
	double b=GetNumeroPositivo();
	cout<<"El perimetro del rectangulo es de: "<<GetPerimetro(h,b);
}

double GetNumeroPositivo(){
	double numero;
	do{
		cin>>numero;
	}while(numero<=0);
}

double GetPerimetro(double, double){
	2*(b+h);
}
