/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 29/10/2024
// Número de ejercicio: 7
// Problema planteado: Escribe un programa que solicite una matriz cuadrada de dimensión n x n e imprima los
elementos de la diagonal principal y de la diagonal secundaria. Los elementos deben ser
generados aleatoriamente del 1 al 100.
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la dimensión de la matriz (n x n) ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));
    srand(time(0));

    for (auto& fila : matriz)
        for (int& num : fila)
            num = rand() % 100 + 1;

    cout << "\nMatriz generada:\n";
    for (const auto& fila : matriz) {
        for (int num : fila) cout << num << " ";
        cout << endl;
    }

    cout << "\nDiagonal principal: ";
    for (int i = 0; i < n; ++i) cout << matriz[i][i] << " ";

    cout << "\nDiagonal secundaria: ";
    for (int i = 0; i < n; ++i) cout << matriz[i][n - i - 1] << " ";

    return 0;
}

