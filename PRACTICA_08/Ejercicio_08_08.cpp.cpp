/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 29/10/2024
// Número de ejercicio: 8
// Problema planteado: Desarrolla un programa que permita al usuario ingresar una matriz de dimensiones m x
n y un número a buscar dentro de la matriz. El programa debe indicar la posición (fila y
columna) donde se encuentra el número o informar si no está en la matriz. Los elementos
deben ser generados aleatoriamente del 1 al 100.
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int m, n, buscar;
    cout << "Ingrese dimensiones de la matriz (m x n): ";
    cin >> m >> n;

    vector<vector<int>> matriz(m, vector<int>(n));
    srand(time(0));

    for (auto& fila : matriz)
        for (int& num : fila)
            num = rand() % 100 + 1;

    cout << "Matriz generada:\n";
    for (const auto& fila : matriz) {
        for (int num : fila) cout << num << " ";
        cout << endl;
    }

    cout << "Ingrese el número a buscar: ";
    cin >> buscar;

    bool encontrado = false;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            if (matriz[i][j] == buscar) {
                cout << "Número encontrado en posición: Fila " << i << ", Columna " << j << endl;
                encontrado = true;
            }

    if (!encontrado) cout << "Número no encontrado en la matriz.\n";

    return 0;
}
