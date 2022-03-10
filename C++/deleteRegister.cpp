#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>
using namespace std;

int main()
{
    ifstream archivo;
    ofstream archivod;
    archivod.open("temp.txt", ios::out);
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
    archivod.close();

    remove("../data.txt");
    rename("temp.txt", "../data.txt");

    return 0;
}
