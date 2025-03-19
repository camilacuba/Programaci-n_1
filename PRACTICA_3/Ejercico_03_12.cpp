//Materia: Programación I, Paralelo 3
// Autor: Camila Valentina Cuba Fernandez 
// Fecha creación: 4/03/2025
// Número de ejercicio: 12
// Problema planteado:Jornada Laboral

#include <iostream>
using namespace std;
void calcularTiempo(int tiempoTrabajado) {
    const int jornadaEstandar = 480; // 8 horas * 60 minutos

    if (tiempoTrabajado > jornadaEstandar) {
        int tiempoExtra = tiempoTrabajado - jornadaEstandar;
        cout << "Has trabajado " << tiempoExtra << " minutos extra." << endl;
    } else if (tiempoTrabajado < jornadaEstandar) {
        int tiempoFaltante = jornadaEstandar - tiempoTrabajado;
        cout << "Te faltan " << tiempoFaltante << " minutos para completar la jornada laboral." << endl;
    } else {
        // Si el tiempo trabajado es exactamente 480 minutos, no hay tiempo extra ni faltante
        cout << "Has trabajado exactamente la jornada laboral de 8 horas." << endl;
    }
}

int main() {
    int tiempoTrabajado;
    cout << "Ingresa el tiempo total trabajado en minutos: ";
    cin >> tiempoTrabajado;
    calcularTiempo(tiempoTrabajado);

    return 0;
}