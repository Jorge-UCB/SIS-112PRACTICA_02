// Materia: Programación I, Paralelo 1

// Autor: Willy Edwin Tenorio Palza

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 2

// Problema planteado: Escribir un programa que a partir de un arreglo constante de 10 elementos enteros, determine el porcentaje de números pares positivos e impares negativos. 

#include <iostream>
using namespace std;
int main() {
    
    const int size = 10;
    int numeros[size] = {2, -3, 4, -5, 6, -7, 8, -9, 10, -11}; //  arreglo constante

    int canposi = 0; 
    int caninega = 0; 

    for (int i = 0; i < size; ++i) {
        if (numeros[i] > 0) {
            if (numeros[i] % 2 == 0) {
                canposi++;
            }
        } else {
            if (numeros[i] % 2 != 0) {
                caninega++;
            }
        }
    }

    double porcentajeCanposi = static_cast<double>(canposi) / size * 100;
    double porcentajeCaninega = static_cast<double>(caninega) / size * 100;

    cout << "Porcentaje de números pares positivos: " << porcentajeCanposi << "%" << endl;
    cout << "Porcentaje de números impares negativos: " << porcentajeCaninega << "%" << endl;

    return 0;
}
