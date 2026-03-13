#include <iostream>
using namespace std;

int main() {
    int numeroVehiculo = 1;
    int litros;
    int consumoTotal = 0;

    cout << "Registro de consumo de combustible" << endl;

    do {
        cout << "Ingrese litros consumidos por el vehiculo " << numeroVehiculo << ": ";
        cin >> litros;
        
        if (litros >= 0) {
            consumoTotal += litros;
        }

        numeroVehiculo++;
    } while (numeroVehiculo <= 7);

    cout << "Resultados" << endl;
    cout << "Consumo total: " << consumoTotal << " litros" << endl;
    cout << "Consumo promedio: " << (consumoTotal / 7) << " litros" << endl;

    return 0;
}
