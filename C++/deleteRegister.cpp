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
    remove("../data.txt");
    rename("temp.txt", "../data.txt");

    return 0;
}

void lectura()
{
    ifstream archivo;
    ofstream archivod("temp.txt", ios::out);
    string texto, texto2;

    archivo.open("../data.txt", ios::in);

    if (archivo.fail())
    {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    string nombre = "Jane Chadwick";
    while (!archivo.eof())
    {
        getline(archivo, texto);
        if (!(texto.find(nombre) != string::npos))
        {

            archivod << texto << endl;
        }
    }

    archivo.close();
}
