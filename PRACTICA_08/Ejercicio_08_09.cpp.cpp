/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 29/10/2024
// Número de ejercicio: 9
// Problema planteado: Desarrolla un programa que permita al usuario ingresar una matriz m x n. Determina si
la matriz es esparsa, es decir, si la mayoría de sus elementos son ceros (por ejemplo, si
más del 50% de los elementos son cero). Los elementos deben ser generados
aleatoriamente del 0 al 10.
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm> 
using namespace std;

bool esEsparsa(const vector<vector<int>>& matriz) {
    int conteoCeros = 0, totalElementos = matriz.size() * matriz[0].size();
    for (const auto& fila : matriz)
        conteoCeros += count(fila.begin(), fila.end(), 0);
    return conteoCeros > totalElementos / 2;
}

int main() {
    int m, n;
    cout << "Ingrese dimensiones de la matriz (m x n) ";
    cin >> m >> n;

    vector<vector<int>> matriz(m, vector<int>(n));
    srand(static_cast<unsigned int>(time(0))); 

    for (auto& fila : matriz)
        for (int& num : fila)
            num = rand() % 11; 
    cout << "Matriz generada:\n";
    for (const auto& fila : matriz) {
        for (int num : fila) cout << num << " ";
        cout << endl;
    }

    cout << (esEsparsa(matriz) ? "La matriz es esparsa.\n" : "La matriz no es esparsa.\n");
    return 0;
}
