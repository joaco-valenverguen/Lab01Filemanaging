//***********************************************
//  archiv01.cpp
//  Demuestra la escritura básica en archivo
//  ©1999, Jaime Virgilio Gómez Negrete
//***********************************************

#include <fstream>
#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;


void escribir(){
	ofstream archivo;
	int numero;
	string nombre, frase;
	
	cout<< "digiite el nombre del archivo" << endl;
	getline(cin, nombre);
	
	archivo.open(nombre.c_str(),ios::out);
	
	if(archivo.fail()){
		cout<<"no se pudo abrir el archivo";
		exit(1);
	}
	
	cout << "digite el texto del archivo" << endl;
	getline(cin, frase);
	
	
	archivo << frase;
	
		
	archivo.close();
}

int main()
{
	escribir();
	
	system("pause");
	
	
	
       return 0;
} 




