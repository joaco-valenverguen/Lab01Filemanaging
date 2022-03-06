#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void aniadir();

int main(){
	
	aniadir();
	system("pause");
	return 0;
}

void aniadir(){
	ofstream archivo;
	string texto;
	
	archivo.open("js.txt", ios::app);
	
	
	if(archivo.fail()){
	//	cout << "no se pudo abrir el archivo";
		exit(1);
	}
	
	for(int i = 0; i<= 10; i++){
		archivo << "hola x"<<i<<endl;
	}

archivo.close();
}



