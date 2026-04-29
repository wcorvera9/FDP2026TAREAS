#include <iostream>
using namespace std;

int main() {
    float velocidad, multa;
    
    cout << "Calculadora de Multas por Exceso de Velocidad" << endl;
    cout << "Ingrese la velocidad del vehiculo (km/h): ";
    cin >> velocidad;

    if (velocidad > 80) {
        multa = (velocidad - 80) * 5; 
        cout << "Multa mayor: $" << multa << endl;
    } else if (velocidad > 60) {
        multa = (velocidad - 60) * 2; 
        cout << "Multa: $" << multa << endl;
    } else {
        cout << "No hay multa, la velocidad no sobrepasa el limite" << endl;
    }

    return 0;
}