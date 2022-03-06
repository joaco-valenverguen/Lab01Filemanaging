#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>
using namespace std;

void lectura();

int main()
{

    lectura();
    system("pause");
     remove("../nombres.txt");
     rename("temp.txt", "../nombres.txt");

    return 0;
}

void lectura()
{
    ifstream archivo;
    ofstream archivod("temp.txt", ios::out);
    string texto, texto2;
	

    archivo.open("../nombres.txt", ios::in);

    if (archivo.fail())
    {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    while (!archivo.eof())
    {
        getline(archivo, texto);
        if(texto != "Juan"){
        	archivod << texto << endl;

		}
    }
    archivod.close();
    archivo.close();
    ifstream archivod2("temp.txt", ios::in);
    ofstream archivo2("../nombres.txt", ios::out);
	while (!archivod2.eof())
    {
        getline(archivod2, texto2);
        if(texto != "Juan"){
        	archivo2 << texto2 << endl;

		}
    }

    archivo.close();
}
