#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

struct jugador{
		string nombre;
		int edad;
		string nacionalidad;
		float sueldo;
};

void nuevoJugador(ofstream &Escritura);

main(){
	int seleccion;
	int permanecer;
	ofstream Escritura;
	do {
		system("CLS");
		cout<<"--------------------------"<<endl;
		cout<<" Menu Principal"<<endl;
		cout<<"-------------------"<<endl;
		cout<<" 1. Nuevo jugador "<<endl;
		cout<<" 2. Reporte planilla "<<endl;		
		cout<<" 3. The best player "<<endl;
		cout<<"--------------------------"<<endl;
		cout<<" Seleccion: ";
		cin>>seleccion;
		
		system("cls");
		switch(seleccion){
			case 1:{
				nuevoJugador(Escritura);
				break;
			}
		}
		
	}while(permanecer!=0);	
}

void nuevoJugador(ofstream &Escritura){
	string nombre_1;
	string nacionalidad_1;
	int edad_1;
	float sueldo = 2500;
	string a = "yes";
	
	Escritura.open("Listado de jugadores.txt", ios::out|ios::app);
	
	do{
	system("cls");	
	cout<<"-------------"<<endl;
	cout<<"Nuevo jugador"<<endl;
	cout<<"-------------"<<endl;
	
	cout<<"Nombre del jugador: ";
	cin>>nombre_1;
	cout<<"Nacionalidad: ";
	cin>>nacionalidad_1;
	cout<<"Edad: ";
	cin>>edad_1;
	cout<<"Sueldo fijo: $"<<sueldo;
	
	if(nacionalidad_1 == "guatemalteca" && edad_1 <= 20){
		cout<<"\nEl jugador es chapin!";
		sueldo += 1200;
		cout<<"\nSueldo del jugador $"<<sueldo;		
	}
	else if(nacionalidad_1 == "guatemalteca" && edad_1 <= 25){
		cout<<"\nEl jugador es chapin!";
		sueldo += 1500;
		cout<<"\nSueldo del jugador $"<<sueldo;	
		cout<<"\nEste es el jugador mejor pagado";	
	}
	else if(nacionalidad_1 == "guatemalteca" && edad_1 <= 30){
		cout<<"\nEl jugador es chapin!";
		sueldo += 1400;
		cout<<"\nSueldo del jugador $"<<sueldo;		
	}	
	else if(nacionalidad_1 != "guatemalteca" && edad_1 <= 20){
		cout<<"\nEl jugador es extranjero!";
		sueldo += 500;
		sueldo += 1400;
		cout<<"\nSueldo del jugador $"<<sueldo;		
	}
	else if(nacionalidad_1 != "guatemalteca" && edad_1 <= 25){
		cout<<"\nEl jugador es extranjero!";
		sueldo += 500;
		sueldo += 1500;
		cout<<"\nSueldo del jugador $"<<sueldo;		
	}
	else if(nacionalidad_1 == "guatemalteca" && edad_1 <= 30){
		cout<<"\nEl jugador es extranjero!";
		sueldo += 500;
		sueldo += 1200;
		cout<<"\nSueldo del jugador $"<<sueldo;		
	}
	else{
		cout<<"\nEl jugador "<<nombre_1<<" 
		esta retirado!";
	}
	cout<<"\nDesea hacer otro registro yes / no: ";
	cin>>a;
	}while(a == "yes");
	
	Escritura<<nombre_1<<"\t|"<<nacionalidad_1<<"\t|"<<edad_1<<"\t|"<<sueldo<<"\n";
	Escritura.close();
	
}


















