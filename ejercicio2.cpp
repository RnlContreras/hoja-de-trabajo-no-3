#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

void nuevaOrden(ofstream &grabar);

main(){
	ofstream grabar;
	
	int seleccion;
	int permanecer;
	ofstream grabar;
	do {
		system("CLS");
		cout<<"--------------------------"<<endl;
		cout<<" PIZZAS GRAN SABOR MMM"<<endl;
		cout<<"-------------------"<<endl;
		cout<<" 1. Nueva Orden "<<endl;
		cout<<" 2. Ventas por unidad"<<endl;		
		cout<<" 3. Ventas globales"<<endl;
		cout<<"--------------------------"<<endl;
		cout<<" Seleccion: ";
		cin>>seleccion;
		
		system("cls");
		switch(seleccion){
			case 1:{
				nuevaOrden(grabar);
				break;
			}
		}
		
	}while(permanecer!=0);	
}

void nuevaOrden(ofstream &grabar){
	int grande = 72;
	int familiar = 97.75;
	int fiesta = 80;
	int i, n;
	
	int eleccion;
	
	cout<<"Nueva Orden"<<endl;
	cout<<"Que tipo de pizza desea 1.grande 2.familiar 3.fiesta: ";
	cin>>eleccion;
	cout<<"Cuantas pizzas desea";
	cin>>n;
	
	for(i=0;i<n;i++){
	if(eleccion == 1){
		grande +=grande;
		cout<<"el precio de la pizza es de: Q80 con el 10% de descuento";
		cout<<"Su total a pagar es de "<<grande;
	}
	else if(eleccion == 2){
		familiar += familiar;
		cout<<"el precio de la pizza es de: Q115 con el 15% de descuento";
		cout<<"Su total a pagar es de "<<familiar;
	}
	else if(eleccion == 3){
		fiesta += fiesta;
		cout<<"el precio de la pizza es de: Q100 con el 20% de descuento";
		cout<<"Su total a pagar es de "<<fiesta;
	}
	}
}
