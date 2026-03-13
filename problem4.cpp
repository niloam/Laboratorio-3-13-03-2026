#include <iostream>
#include <string>
using namespace std;

int main() {
    string producto;
    int precio, cantidad;
    int subtotal, totalDia = 0;
    int pedidos = 0;

    cout << "Registro de pedidos de la cafeteria" << endl;
    cout << "Ingresa 'fin' como nombre de producto para terminar." << endl;

    do {
        cout << "Nombre del producto: ";
        cin >> producto;

        if (producto != "fin") {
            cout << "Precio: ";
            cin >> precio;
            cout << "Cantidad: ";
            cin >> cantidad;

            subtotal = precio * cantidad;
            cout << "Subtotal del pedido: $" << subtotal << endl;

            totalDia += subtotal;
            pedidos++;
        }

    } while (producto != "fin");

    cout << "Resultados del dia" << endl;
    cout << "Numero total de pedidos: " << pedidos << endl;
    cout << "Ingreso total del dia: $" << totalDia << endl;

    return 0;
}