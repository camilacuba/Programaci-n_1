//Materia: Programación I, Paralelo 3
// Autor: Camila Valentina Cuba Fernandez 
// Fecha creación: 4/03/2025
// Número de ejercicio: 11
// Problema planteado:Serie de Collatz

#include <iostream>
using namespace std;

int collatz (int);

int main () 
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    int p = collatz(num);
    cout << "Se llego al resultado en " << p << " pasos" << endl;
}

int collatz (int n) {
    cout << "La serie de Collatz:\n" << n << "\t";
    int pasos = 0;
    while(n != 1) 
    {
        if(n % 2 == 0)
        {
            n = n / 2;
        } 
        else 
        {
            n = (n * 3) + 1;
        }
        cout << n << "\t";
        pasos++;
    }
    return pasos;
}