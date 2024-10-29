/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 29/10/2024
// Número de ejercicio: 11
// Problema planteado: Escribe un programa que valide si una cadena ingresada cumple con el formato
básico de una dirección de correo electrónico (por ejemplo, contiene exactamente un '@'
y al menos un punto '.' después del '@').
• // Entrada: "usuario@example.com"
• // Salida: "Correo electrónico válido"
• // Entrada: "usuarioexample.com"
• // Salida: "Correo electrónico inválido"
*/
#include <iostream>
#include <string>

using namespace std;

bool esCorreoValido(const string& correo) {
    int arrobas = 0, punto = 0;
    for (char c : correo) {
        if (c == '@') arrobas++;
        if (arrobas == 1 && c == '.') punto++;
    }
    return arrobas == 1 && punto > 0;
}

int main() {
    string correo;
    cout << "Ingrese un correo electrónico ";
    cin >> correo;
    cout << (esCorreoValido(correo) ? "Correo electrónico válido\n" : "Correo electrónico inválido\n");
    return 0;
}
