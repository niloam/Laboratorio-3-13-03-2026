#include <iostream>
using namespace std;

int main() {
    int edad;
    int totalPersonas = 0;
    int sumaEdades = 0;
    int mayoresEdad = 0;

    cout << "Registro de edades en la comunidad" << endl;
    cout << "Ingrese las edades (0 para terminar):" << endl;

    do {
        cin >> edad;

        if (edad > 0) {
            totalPersonas++;
            sumaEdades += edad;

            if (edad >= 18) {
                mayoresEdad++;
            }
        }

    } while (edad != 0);

    cout << "Resultados del estudio" << endl;
    cout << "Numero total de personas registradas: " << totalPersonas << endl;

    if (totalPersonas > 0) {
        cout << "Edad promedio: " << (sumaEdades / totalPersonas) << endl;
    } else {
        cout << "Edad promedio: N/A (no se registraron personas)" << endl;
    }

    cout << "Cantidad de personas mayores de edad: " << mayoresEdad << endl;

    return 0;
}