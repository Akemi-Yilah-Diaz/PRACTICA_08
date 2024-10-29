/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 29/10/2024
// Número de ejercicio: 16
// Problema planteado: . Desarrolla un programa que permita al usuario ingresar una matriz de m x n
cadenas (donde cada celda contiene una palabra). Luego, pide al usuario una
letra y cuenta cuántas veces aparece esa letra en toda la matriz. Muestra el
resultado.
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int contarLetra(const vector<vector<string>>& matriz, char letra) {
    int contador = 0;
    for (const auto& fila : matriz)
        for (const auto& palabra : fila)
            contador += count(palabra.begin(), palabra.end(), letra);
    return contador;
}

int main() {
    int m, n;
    cout << "Ingrese dimensiones (m x n) ";
    cin >> m >> n; cin.ignore();

    vector<vector<string>> matriz(m, vector<string>(n));
    for (auto& fila : matriz)
        for (auto& palabra : fila) {
            cout << "Ingrese palabra ";
            getline(cin, palabra);
        }

    char letra;
    cout << "Ingrese letra a buscar ";
    cin >> letra;

    cout << "La letra '" << letra << "' aparece " << contarLetra(matriz, letra) << " veces.\n";

    return 0;
}
