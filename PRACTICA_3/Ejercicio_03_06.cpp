//Materia: Programación I, Paralelo 3
// Autor: Camila Valentina Cuba Fernandez 
// Fecha creación: 4/03/2025
// Número de ejercicio: 6
// Problema planteado:Función deternminar cuantos dias tiene ese mes

#include <iostream>
using namespace std;

// Función para verificar si un año es bisiesto
bool esBisiesto(int año) {
    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

// Función para obtener los días de un mes, considerando si es bisiesto
int obtenerDiasDelMes(int mes, int año) {
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // Si es febrero (mes 2) y es un año bisiesto, el mes tiene 29 días
    if (mes == 2 && esBisiesto(año)) {
        return 29;
    }
    return diasPorMes[mes - 1];
}

int main() {
    int mes, año;
    cout << "Ingresa el anio: ";
    cin >> año;

    cout << "Ingresa el mes (1 a 12): ";
    cin >> mes;
    // Verificar que el mes esté en el rango válido
    if (mes < 1 || mes > 12) {
        cout << "Mes no valido. Debes ingresar un numero entre 1 y 12." << endl;
        return 1;
    }

    int dias = obtenerDiasDelMes(mes, año);
    cout << "El mes " << mes << " del anio " << año << " tiene " << dias << " dias." << endl;

    return 0;
}