//Materia. Programacion I, Paralelo 3
//Autor: Camila Valentina Cuba Fernández
//Fecha de Creacion: 22/02/2025
//Problema Planteado: Generar secuencia ingresando n

#include <iostream>
using namespace std;

int main() {
	int n;

	//requerir n 
	
	cout << "Ingrese un numero: " << endl;
	cin>>n;

	for (int i = n; i >0 ; i--)
	{
		for (int j = 1;j <= i;j++) {
			cout << j;
		}
		cout << endl;
	}
	return 0;
} 