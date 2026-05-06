#include <iostream>
using namespace std;

int main() {
    int transporte;
    int distancia;
    int precio;

    cout << "----Bienvenido a viajes----" << endl;
    cout << "Ingrese el tipo de transporte" << endl;
    cout << "1. Avion" << endl;
    cout << "2. Tren" << endl;
    cout << "3. Autobus" << endl;
    cin >> transporte;
    cout << "Ingrese la distancia del viaje en kilometros: ";
    cin >> distancia;

    switch (transporte) {
        case 1:
            precio = distancia * 0.5;
            cout << "El precio del viaje es: " << precio << endl;
            break;
        case 2:
            precio = distancia * 0.3;
            cout << "El precio del viaje es: " << precio << endl;
            break;
        case 3:
            precio = distancia * 0.1;
            cout << "El precio del viaje es: " << precio << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
            
            
    }
    return 0;

}