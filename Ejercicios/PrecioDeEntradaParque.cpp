#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "Bienvenido al parque de diversiones" << endl;
    cout << "Por favor, ingresa tu edad: ";
    cin >> edad;

    if (edad <= 5) {
        cout << "Su entrada es gratuita." << endl;
    } else if (edad >= 6 && edad <= 12) {
        cout << "Su entrada cuesta $5." << endl;
    } else if (edad >= 13 && edad <= 70) {
        cout << "Su entrada cuesta $10." << endl;
    }
    
    return 0;
        
    }














