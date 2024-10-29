/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 29/10/2024
// Número de ejercicio: 14
// Problema planteado: Escribe un programa que divida una cadena en tokens (subcadenas) separadas por
un delimitador. Por ejemplo, dividir una oración en palabras.
// Entrada: "Esto,es,una,cadena,separada,por,comas", delimitador: ','
// Salida:
// Esto
// es
// una
// cadena
// separada
// por
// comas
*/
#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string entrada;
    cout << "Ingrese una cadena ";
    getline(cin, entrada);
    cout << "delimitador ";
    char delim; 
    cin >> delim;

    stringstream ss(entrada);
    string token;

    while (getline(ss, token, delim)) {
        token.erase(0, token.find_first_not_of(" "));
        token.erase(token.find_last_not_of(" ") + 1);
        if (!token.empty())
            cout << token << endl;
    }

    return 0;
}
