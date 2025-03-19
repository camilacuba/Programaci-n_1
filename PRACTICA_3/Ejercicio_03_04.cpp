// Materia: Programación I, Paralelo 3
// Autor: Camila Valentina Cuba Fernandez 
// Fecha creación: 4/03/2025
// Número de ejercicio: 4
// Problema planteado:Función para el cálculo del IMC 

#include <iostream>
using namespace std;
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);  // Fórmula del IMC
}

int main() {
    float peso, altura, imc;
    cout << "Ingresa tu peso en kilogramos: ";
    cin >> peso;
    cout << "Ingresa tu altura en metros(Ejemplo 1.60): ";
    cin >> altura;
    imc = calcularIMC(peso, altura);

    // Mostrar el resultado del IMC
    cout << "Tu IMC es: " << imc << endl;
    //Clasificacion segun IMC
    if (imc < 18.5) {
        cout << "Estas en la categoria de peso insuficiente" << endl;
    } else if (imc >= 18.5 && imc < 24.9) {
        cout << "Tienes un peso normal" << endl;
    } else if (imc >= 25 && imc < 29.9) {
        cout << "Estas en la categoria d sobrepeso." << endl;
    } else {
        cout << "Tienes obesidad." << endl;
    }

    return 0;
}