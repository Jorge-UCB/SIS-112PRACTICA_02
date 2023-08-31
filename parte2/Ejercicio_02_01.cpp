// Materia: Programación I, Paralelo 1

// Autor: Willy Edwin Tenorio Palza

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 1

// Problema planteado:  Almacenar un vector de tamaño N, con números al azar entre A y B, e imprima la suma  de los componentes de índice par y la resta de los componentes de índice impar. 

#include <iostream>
#include <vector>
#include <random>

int main() {
    using namespace std;

    int A, B;
    
    cout << "Ingrese el valor de A: ";
    cin >> A;
    
    cout << "Ingrese el valor de B: ";
    cin >> B;

    int N = B - A + 1;  // Rango N automáticamente definido

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(A, B);

    vector<int> numeros;

    for (int i = 0; i < N; ++i) {
        int num = dis(gen);
        numeros.push_back(num); // Almacena el número en el vector
    }

    int sumaPares = 0;
    int restaImpares = 0;

    for (int i = 0; i < numeros.size(); ++i) {
        if (i % 2 == 0) { // Componente de índice par
            sumaPares += numeros[i];
        } else { // Componente de índice impar
            restaImpares -= numeros[i];
        }
    }

    cout << "Números aleatorios generados:" << endl;

    for (int num : numeros) {
        cout << num << " ";
    }

    cout << "\nSuma de componentes de índice par: " << sumaPares << endl;
    cout << "Resta de componentes de índice impar: " << restaImpares << endl;

    return 0;
}
