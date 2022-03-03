#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

void escribir();
void leer();

int main ()
{
	escribir();
	leer();

	return 0;
	
	/*string pal;
	string palresult;
	int i = 0;
	cout<<"Ingrese la palabra que desea verificar si es o no Palindroma: ";
	cin >> pal;
	for (i = pal.size() - 1; i >= 0; i--)
	{
		palresult += pal[i];
	}
	
	if (pal == palresult)
	{
		cout<<"La palabra "<<pal<<" es palindroma";
	}
	else
	{
		cout<<"La palabra "<<pal<<" no es palindroma";
	}
	return 0;*/
}

void escribir()
{
	string pal;
	ofstream archivo;
	
	archivo.open("entrada.txt",ios::out);//Abre el archivo
	if (archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"Ingrese la palabra que desea verificar si es o no Palindroma: ";
	cin >> pal;
	archivo<<pal;
	
	archivo.close();
}


void leer()
{
	int i = 0;
	string pal;
	string palresult;
	ofstream archi;
	ifstream archivo;
	
	archivo.open("entrada.txt",ios::in);//Abre el archivo
	if (archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);//cierra el programa
	}
	
	while(!archivo.eof())//Identifica que no se haya llegado al final del archivo
	{
		getline(archivo,pal);
		cout<<pal<<endl;
	}
	
	for (i = pal.size() - 1; i >= 0; i--)
	{
		palresult += pal[i];
	}
	
	if (pal == palresult)
	{
		cout<<"La palabra "<<pal<<" es palindroma"<<endl;
	}
	else
	{
		cout<<"La palabra "<<pal<<" no es palindroma"<<endl;
	}
	
	archivo.close();
	
	//system("pause");
	exit(1);
	
	//Guardo el resultado
	archi.open("salida.txt",ios::out);//Abre el archivo
	if (archi.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cin >> pal;
	archi<<pal;
	
	archi.close(); //Cierra el archivo
}
