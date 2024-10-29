/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 29/10/2024
// Número de ejercicio: 5
// Problema planteado: Crea un programa que permita al usuario ingresar N números en un vector y luego rota
el vector k posiciones a la derecha. Muestra el vector después de la rotación.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, k;
    cout << "Ingrese la cantidad de números";
    cin >> N;

    vector<int> numeros(N);
    cout << "Ingrese los números\n";
    for (int& num : numeros) cin >> num;

    cout << "Ingrese el número de posiciones para rotar ";
    cin >> k;

    k %= N; 
    rotate(numeros.rbegin(), numeros.rbegin() + k, numeros.rend());

    cout << "Vector después de rotación\n";
    for (int num : numeros) cout << num << " ";
    cout << endl;

    return 0;
}
