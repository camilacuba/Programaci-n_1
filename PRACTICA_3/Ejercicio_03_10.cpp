//Materia: Programación I, Paralelo 3
// Autor: Camila Valentina Cuba Fernandez 
// Fecha creación: 4/03/2025
// Número de ejercicio: 10
// Problema planteado:Serie matematica

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void serie (int);

int main () {
    int n;
    cout << "Ingrese el valor de n" << endl;
    cin >> n;
    serie(n);
}

void serie (int num) {
    int numerador = 0, denominador = 1;
    for(int i = 1; i <= num; i++){
        cout<<1<<"/"<<i<<endl;
        numerador = denominador + numerador * i;
        denominador = denominador * i;
    }

    cout << "resultado: " << numerador << "/" << denominador << endl;
}