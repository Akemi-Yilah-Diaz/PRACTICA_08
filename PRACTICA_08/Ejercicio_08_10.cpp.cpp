/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 29/10/2024
// Número de ejercicio: 10
// Problema planteado: Crea un programa que permita al usuario ingresar una matriz m x n. Muestra solo los
elementos que se encuentran en el borde de la matriz (primera y última fila, y primera y
última columna). Los elementos deben ser generados aleatoriamente del 1 al 100.
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int m, n;
    cout << "Ingrese dimensiones de la matriz (m x n) ";
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

    cout << "Elementos en el borde:\n";
    for (int j = 0; j < n; ++j) cout << matriz[0][j] << " ";
    for (int i = 1; i < m - 1; ++i) cout << matriz[i][0] << " " << matriz[i][n - 1] << " ";
    if (m > 1) for (int j = 0; j < n; ++j) cout << matriz[m - 1][j] << " ";

    cout << endl;
    return 0;
}
