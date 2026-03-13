#include <iostream>
using namespace std;

int main() {
    int opcion;
    int total = 0;

    do {
        cout << "MENU CAFETERIA DE MAUCHI" << endl;
        cout << "1. Cafe -> $3000" << endl;
        cout << "2. Te -> $2500" << endl;
        cout << "3. Jugo -> $4000" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            switch (opcion) {
                case 1:
                    total += 3000;
                    cout << "Agregaste Cafe. Total: $" << total << endl;
                    break;
                case 2:
                    total += 2500;
                    cout << "Agregaste Te. Total: $" << total << endl;
                    break;
                case 3:
                    total += 4000;
                    cout << "Agregaste Jugo. Total: $" << total << endl;
                    break;
                case 4:
                    cout << "Saliendo." << endl;
                    break;
            }
        } else {
            cout << "Opcion invalida, intenta de nuevo." << endl;
        }

    } while (opcion != 4);

    cout << "El total de tu compra es: $" << total << endl;

    return 0;
}