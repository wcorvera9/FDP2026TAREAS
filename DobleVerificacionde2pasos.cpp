#include <iostream>
using namespace std;

int main() {
    string contrasena, contrasena2;

cout << "Verificacion de 2 pasos" << endl;
    cout << "Cree una contrasena: ";
    cin >> contrasena;
    cout << "Confirme su contrasena: ";
    cin >> contrasena2;

    if (contrasena == contrasena2) {
        cout << "Contrasena correcta" << endl;
    } else {
        cout << "Contrasena incorrecta" << endl;
    }
    cout << "Puede continuar" << endl;

    return 0;
}