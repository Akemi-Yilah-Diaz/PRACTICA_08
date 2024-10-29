/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 29/10/2024
// Número de ejercicio: 1
// Problema planteado:Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir
de este arreglo determine la desviación típica.
https://www.superprof.es/apuntes/escolar/matematicas/estadistica/descriptiva/desviac
ion-tipica.html
*/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<int> edades;
    int edad;
    double suma = 0.0, media = 0.0, varianza = 0.0, desviacionTipica;

    cout << "Ingrese las edades (-1 para terminar):\n";
    while (cin >> edad && edad != -1) {
        edades.push_back(edad);
        suma += edad;
    }

    media = suma / edades.size();

    for (int e : edades) {
        varianza += (e - media) * (e - media);
    }

    desviacionTipica = sqrt(varianza / edades.size());

    cout << "Media" << media << "\n";
    cout << "Desviación Típica " << desviacionTipica << "\n";

    return 0;
}
