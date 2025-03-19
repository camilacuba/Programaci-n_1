// Materia: Programación I, Paralelo 3
// Autor:Camila Valentina Cuba Fernandez 
// Fecha creación: 4/03/2025
// Número de ejercicio: 3
// Problema planteado:Función para determinar si un número es capicúa

#include <iostream>
using namespace std;

bool esCapicua(int numero) {
    int original = numero;  
    int invertido = 0;
    // Invertir el número
    while (numero > 0) {
        int digito = numero % 10; 
        invertido = invertido * 10 + digito;  
        numero /= 10;  //
    }
    return original == invertido;
}

int main() {
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;
    if (esCapicua(numero)) {
        cout << "El numero " << numero << " es capicua." << endl;
    } else {
        cout << "El numero " << numero << " no es capicua." << endl;
    }

    return 0;
}