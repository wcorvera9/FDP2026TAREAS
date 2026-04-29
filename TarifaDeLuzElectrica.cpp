#include <iostream>
using namespace std;

int main() {
    float consumo;

    cout << "Calculadora de Tarifa de Luz Electrica" << endl;
    cout << "Ingrese el consumo de luz: ";
    cin >> consumo;
    
    if (consumo <= 100) {
        cout << "Su tarifa es baja" << endl;
    } else if (consumo > 100 && consumo <= 200) {
        cout << "Su tarifa es media" << endl;
    } else {
        cout << "Su tarifa es alta" << endl;
    
        return 0;

    }
}