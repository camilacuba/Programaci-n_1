//Materia: Programación I, Paralelo 3
// Autor: Camila Valentina Cuba Fernandez 
// Fecha creación: 4/03/2025
// Número de ejercicio: 13
// Problema planteado:Precio Taxi

#include <iostream>
using namespace std;

double calcularTarifa(double kmRecorridos) {
    double tarifaBase = 5.0;         
    double precioPorKilometro = 1.50; // Precio por kilómetro
    double precioTotal = tarifaBase + (precioPorKilometro * kmRecorridos);

    // Aplicar descuento del 10% si la distancia recorrida es mayor a 10 km
    if (kmRecorridos > 10) {
        precioTotal *= 0.90;  
    }
    return precioTotal; 
}

int main() {
    double kmRecorridos;

    cout << "Ingresa la distancia recorrida en km: ";
    cin >> kmRecorridos;

    double precioViaje = calcularTarifa(kmRecorridos);
    cout << "El precio del viaje es: $" << precioViaje << endl;

    return 0;
}