/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 29/10/2024
// Número de ejercicio: 2
// Problema planteado:Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y otro
contiene los nombres de estos minerales, para obtener:
- Buscar por nombre de mineral y desplegar la producción
- Ordenar del mayor al menor (producción) y mostrar:
Mineral Produccion ™
SN 998.000
SB 876.500
AU 786.670
PT 636.143
AG 135.567
CU 109.412
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mostrarProduccion(const vector<string>& nombres, const vector<double>& produccion, const string& mineral) {
    auto it = find(nombres.begin(), nombres.end(), mineral);
    if (it != nombres.end()) {
        size_t index = distance(nombres.begin(), it);
        cout << "Producción de " << mineral << ": " << produccion[index] << " TM\n";
    } else {
        cout << "Mineral no encontrado.\n";
    }
}

int main() {
    const vector<string> nombres = {"SN", "SB", "AU", "PT", "AG", "CU"};
    const vector<double> produccion = {998000.0, 876500.0, 786670.0, 636143.0, 135567.0, 109412.0};

    string mineral;
    cout << "Ingrese el nombre del mineral: ";
    cin >> mineral;

    mostrarProduccion(nombres, produccion, mineral);

    return 0;
}
