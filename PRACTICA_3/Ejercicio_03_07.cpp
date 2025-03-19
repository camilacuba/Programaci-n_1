//Materia: Programación I, Paralelo 3
// Autor: Camila Valentina Cuba Fernandez 
// Fecha creación: 4/03/2025
// Número de ejercicio: 7
// Problema planteado:Función contar digitos

#include <iostream>
using namespace std;

int contarDigitos(int numero) {
    int contador = 0;

    while (numero > 0) {
        numero /= 10;  // Dividir entre 10
        contador++;    // Aumentar el contador por cada división
    }

    return contador;  
}

int main() {
    int numero;
    cout<<"Ingrese un numero";
    cin >> numero;  
    cout << "El numero tiene " << contarDigitos(numero) << " digitos." << endl;

    return 0;
}