//Materia: Programación I, Paralelo 3
// Autor: Camila Valentina Cuba Fernandez 
// Fecha creación: 4/03/2025
// Número de ejercicio: 8
// Problema planteado:Función genera edades y alturas aleatorias 

#include <iostream>
#include <cstdlib>  
#include <ctime>   
using namespace std;

// Función para generar aleatoriamente las edades y alturas de N alumnos
void generarEstadisticas(int N) {
    int sumaEdades = 0, sumaAlturas = 0;
    int alumnosMayoresDe18 = 0;
    int alumnosAlturaMayor175 = 0;

    // ciclo que genera aleatoriamente las edades y alturas de N alumnos
    for (int i = 1; i < N+1; i++) {
        int edad = rand() % 35 + 1;
        int altura = rand() % 81 + 120;
        cout<<"Edad "<<i<<" :"<<edad<<endl;
        cout<<"Altura "<<i<<" :"<<altura<<endl;
        sumaEdades += edad;
        sumaAlturas += altura;
        // Contar alumnos mayores de 18 años
        if (edad > 18) {
            alumnosMayoresDe18++;
        }
        // Contar alumnos que miden más de 1.75 metros (175 cm)
        if (altura > 175) {
            alumnosAlturaMayor175++;
        }
    }

    // Calcular la edad media
    double edadMedia = sumaEdades / (double)N;
    // Calcular la altura media
    double alturaMedia = sumaAlturas / (double)N;
    cout << "Edad media: " << edadMedia << " anios" << endl;
    cout << "Altura media: " << alturaMedia << " cm" << endl;
    cout << "Cantidad de alumnos mayores de 18 anios: " << alumnosMayoresDe18 << endl;
    cout << "Cantidad de alumnos que miden mas de 1.75 metros: " << alumnosAlturaMayor175 << endl;
}

int main() {
    srand(time(0));

    int N;
    cout << "Ingresa el numero de alumnos: ";  
    cin >> N;  
    generarEstadisticas(N);

    return 0;
}