// Materia: Programación I, Paralelo 3
// Autor: Camila Valentina Cuba Fernandez 
// Fecha creación: 4/03/2025
// Número de ejercicio: 1
// Problema planteado:Función para determinar si un número es par o impar.

#include <iostream> 
using namespace std;

void DeterminarParImpar(int numero){
    if (numero % 2==0)//si su residuo entre 2 es 0, es par
    {
        cout<<"Es numero par ";
    }
    else
    {
        cout<<"Es un numero impar";
    }

}
int main(){ 
    int numero;
    cout<<"Ingresa un numero: ";
    cin>>numero;
    DeterminarParImpar(numero);
    return 0;
    

}