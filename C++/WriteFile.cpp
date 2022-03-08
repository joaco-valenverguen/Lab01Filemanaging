#include <fstream>
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    ofstream archivo;

    archivo.open("file.txt", ios::out);

    if (archivo.fail())
    {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    archivo << "contenido" << endl;

    archivo.close();
    return 0;
}
