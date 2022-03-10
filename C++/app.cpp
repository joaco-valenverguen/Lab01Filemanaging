#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

int main()
{
    ofstream archivo;
    string texto;

    archivo.open("js.txt", ios::app);

    if (archivo.fail())
    {
        //	cout << "no se pudo abrir el archivo";
        exit(1);
    }

    for (int i = 0; i <= 10000; i++)
    {
        archivo << "hola x" << i << endl;
    }

    archivo.close();

    return 0;
}
