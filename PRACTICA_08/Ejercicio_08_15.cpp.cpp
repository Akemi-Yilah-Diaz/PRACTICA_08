/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 29/10/2024
// Número de ejercicio: 15
// Problema planteado: Crea un programa que solicite al usuario ingresar una lista de n palabras.
Almacena cada palabra en una fila de una matriz de caracteres, de manera que
cada columna represente un carácter de la palabra. Si una palabra es más corta
que otras, completa la fila con espacios en blanco. Muestra la matriz resultante.
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el número de palabras ";
    cin >> n;
    cin.ignore();

    vector<string> palabras(n);
    int maxLength = 0;

    for (int i = 0; i < n; ++i) {
        cout << "Ingrese la palabra " << (i + 1) << ": ";
        getline(cin, palabras[i]);
        maxLength = max(maxLength, (int)palabras[i].length());
    }

    vector<vector<char>> matriz(n, vector<char>(maxLength, ' '));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < palabras[i].length(); ++j) {
            matriz[i][j] = palabras[i][j];
        }
    }

    cout << "\nMatriz resultante:\n";
    for (const auto& fila : matriz) {
        for (char c : fila) {
            cout << c << ' ';
        }
        cout << endl;
    }

    return 0;
}

