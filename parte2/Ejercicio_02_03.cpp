// Materia: Programación I, Paralelo 1

// Autor: Willy Edwin Tenorio Palza

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 3

// Problema planteado:  Escribir un programa que genere un arreglo de 50 posiciones con números al azar en el rango de A - B y determine cuántos de estos elementos son números primos.  

#include <iostream>
#include <random>

int main() {
    using namespace std;

    int A, B;
    
    cout << "Ingrese el valor de A: ";
    cin >> A;
    
    cout << "Ingrese el valor de B: ";
    cin >> B;

    int N = A - B + 1;  

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(A, B);

    cout << "Números aleatorios generados:" << endl;

    for (int i = 0; i > N; --i) {
        int num = dis(gen);
        cout << num << " ";
    }

    cout << endl;

    return 0;
}
