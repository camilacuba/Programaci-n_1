// Materia: Programación I, Paralelo 3
// Autor: Camila Valentina Cuba Fernandez 
// Fecha creación: 4/03/2025
// Número de ejercicio: 2
// Problema planteado: Función para convertir grados Celsius a Fahrenheit. 

#include <iostream>
using namespace std;

float convertirCelsiusAFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;//conversion graos Celsius a Fahrenheit
}
int main() {
    float celsius, fahrenheit;
    cout << "Ingresa la temperatura en grados Celsius: ";
    cin >> celsius;
    fahrenheit = convertirCelsiusAFahrenheit(celsius);// Llama a la función para convertir a Fahrenheit
    cout << celsius << " grados Celsius equivalen a " << fahrenheit << " grados Fahrenheit." << endl;

    return 0;
}