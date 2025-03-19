//Materia: Programación I, Paralelo 3
// Autor: Camila Valentina Cuba Fernandez 
// Fecha creación: 4/03/2025
// Número de ejercicio: 9
// Problema planteado:Convertir monto a billetes

#include <iostream>
using namespace std;

void convertirBilletes(int monto) {
    // Definir los billetes y monedas
    int billetes[] = {200, 50, 20, 10, 5};
    double monedas[] = {1, 0.5};  // monedas
    for (int i = 0; i < 5; i++) {
        if (monto >= billetes[i]) {
            int cantidad = monto / billetes[i];  
            monto = monto % billetes[i];  
            cout << cantidad << " billetes de " << billetes[i] << " Bs." << endl;
        }
    }
    for (int i = 0; i < 2; i++) {
        if (monto >= monedas[i]) {
            int cantidad = monto / monedas[i];  
            monto = monto - cantidad * monedas[i];  
            cout << cantidad << " moneda(s) de " << monedas[i] << " Bs." << endl;
        }
    }
}

int main() {
    int monto;
    cout << "Ingrese el monto a retirar: ";
    cin >> monto;
    convertirBilletes(monto);

    return 0;
}