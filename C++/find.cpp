#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

int main()
{
    ifstream archivo;
    string texto;
    string nombre = "Melania Thornton";

    archivo.open("../data.txt", ios::in);

    if (archivo.fail())
    {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    while (!archivo.eof())
    {
        getline(archivo, texto);
        if (texto.find(nombre) != string::npos)
        {
            cout << texto << endl;
        }
    }
    archivo.close();
    return 0;
}
