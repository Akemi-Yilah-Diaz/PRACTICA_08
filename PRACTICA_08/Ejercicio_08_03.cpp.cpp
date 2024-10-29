/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 29/10/2024
// Número de ejercicio: 3
// Problema planteado:Se tiene 3 vectores de 10 elementos cada uno:
• Vector de nombres.
• Vector Apellidos
• Vector de Edad
Seleccione 1 nombre, 1 apellido y una edad al azar y despliegue en pantalla.
Esto debe realizar N veces.
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void mostrarAleatorio(const vector<string>& nombres, const vector<string>& apellidos, const vector<int>& edades) {
    int indice = rand() % nombres.size();
    cout << nombres[indice] << " " << apellidos[indice] << ", " << edades[indice] << endl;
}

void ejecutarNVeces(const vector<string>& nombres, const vector<string>& apellidos, const vector<int>& edades, int N) {
    for (int i = 0; i < N; ++i) {
        mostrarAleatorio(nombres, apellidos, edades);
    }
}

int main() {
    vector<string> nombres = {"Juan", "Ana", "Luis", "Maria", "Jose", "Lucia", "Carlos", "Elena", "Pablo", "Clara"};
    vector<string> apellidos = {"Perez", "Lopez", "Garcia", "Martinez", "Sanchez", "Diaz", "Fernandez", "Gomez", "Ruiz", "Hernandez"};
    vector<int> edades = {25, 30, 22, 28, 35, 27, 26, 29, 31, 24};

    srand(time(0));

    int N;
    cout << "Ingrese el número de veces que desea ejecutar: ";
    cin >> N;

    ejecutarNVeces(nombres, apellidos, edades, N);

    return 0;
}
