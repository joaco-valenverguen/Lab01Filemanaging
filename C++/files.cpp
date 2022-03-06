#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
    ofstream file;

    file.open("file.txt", ios::in);

    return 0;
}
