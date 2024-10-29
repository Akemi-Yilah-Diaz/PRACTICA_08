/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 29/10/2024
// Número de ejercicio: 12
// Problema planteado: . Escribe un programa que invierta el orden de las palabras en una oración sin cambiar
el orden de los caracteres dentro de cada palabra.
• // Entrada: "Hola mundo desde C++"
• // Salida: "C++ desde mundo Hola"
*/
#include <iostream>
#include <sstream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    string oracion;
    cout << "Ingrese una oración";
    getline(cin, oracion);
    
    istringstream stream(oracion);
    vector<string> palabras((istream_iterator<string>(stream)), istream_iterator<string>());

    for (int i = palabras.size() - 1; i >= 0; --i) {
        cout << palabras[i] << (i > 0 ? " " : "");
    }
    cout << endl;

    return 0;
}
