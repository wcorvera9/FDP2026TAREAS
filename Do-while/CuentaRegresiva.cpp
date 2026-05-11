#include <iostream>
using namespace std;

int main() {
    int contador = 0;
    cout << "Ingrese un numero para iniciar la cuenta regresiva: ";
    cin >> contador;
    do {
        cout << contador << endl;
        contador--;
    } while (contador >= 0);
    cout << "¡Cuenta regresiva finalizada!" << endl;
    return 0;
}