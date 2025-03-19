// Materia: Programación I, Paralelo 3
// Autor: Camila Valentina Cuba Fernandez 
// Fecha creación: 4/03/2025
// Número de ejercicio: 5
// Problema planteado:Función promedio ponderados

#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

float calcularPromedioPonderado(int calificaciones[], int pesos[], int n) {
    float sumaPonderada = 0;
    int sumaPesos = 0;
    for (int i = 0; i < n; i++) {
        sumaPonderada += calificaciones[i] * pesos[i];  
        sumaPesos += pesos[i];  
    }

    return sumaPonderada / sumaPesos; 
}
int main() {
    srand(time(0));
    int calificaciones[4];
    for (int i = 0; i < 4; i++) {
        calificaciones[i] = rand() % 100 + 1;  // Genera un numero aleatorio entre 1 y 100
    }
    // Pesos de las calificacioness
    int pesos[4] = {10, 20, 30, 40};
    cout << "Calificaciones generadas: ";
    for (int i = 0; i < 4; i++) {
        cout << calificaciones[i] << " ";
    }
    cout << endl;
    cout << "Pesos correspondientes: 10, 20, 30, 40" << endl;
    float promedioPonderado = calcularPromedioPonderado(calificaciones, pesos, 4);
    cout << "El promedio ponderado es: " << promedioPonderado << endl;

    return 0;
}