#include <iostream>
using namespace std;
int main() {
    int paquete;

    cout << "Bienvenido a envios Express" << endl;
    cout << "Ingrese el peso del paquete en kg: ";
    cin >> paquete;
    
if (paquete <=5) {
    cout << "El costo de envio es de $5" << endl;
} else if (paquete > 5 && paquete <= 10) {
    cout << "El costo de envio es de $10" << endl;
} else {
    cout << "El costo de envio es de $15" << endl;

    return 0;  
}