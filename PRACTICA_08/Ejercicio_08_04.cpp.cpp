/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 29/10/2024
// Número de ejercicio: 4
// Problema planteado:3. Escribe un programa que permita al usuario ingresar N números en un vector. El
programa debe eliminar los elementos duplicados en el vector y mostrar el vector
resultante sin duplicados.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de números ";
    cin >> N;

    vector<int> numeros(N);
    cout << "Ingrese los números\n";
    for (int& num : numeros) cin >> num;

    sort(numeros.begin(), numeros.end());
    numeros.erase(unique(numeros.begin(), numeros.end()), numeros.end());

    cout << "Vector sin duplicados\n";
    for (int num : numeros) cout << num << " ";
    cout << endl;

    return 0;
}
