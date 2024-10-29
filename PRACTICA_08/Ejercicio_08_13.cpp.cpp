/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 29/10/2024
// Número de ejercicio: 13
// Problema planteado: Escribe un programa que elimine todos los dígitos de una cadena.
// Entrada: "abc123def456"
// Salida: "abcdef"
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string entrada, salida;
    cout << "Ingrese una cadena ";
    getline(cin, entrada);
    
    for (char c : entrada) if (!isdigit(c)) salida += c;

    cout << "Cadena sin dígitos " << salida << endl;
    return 0;
}
