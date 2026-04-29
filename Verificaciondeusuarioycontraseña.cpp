#include <iostream>
using namespace std;
int main() {
    string usuario, contraseña;

    cout << "Bienvenido usuario" << endl;
    cout << "Por favor, ingrese su nombre de usuario y contraseña para acceder al sistema." << endl;

    cout << "Ingrese su nombre de usuario: ";
    cin >> usuario;

    cout << "Ingrese su contraseña: ";
    cin >> contraseña;

    if (usuario == "admin" && contraseña == "1234") {
        cout << "Bienvenido, admin" << endl;
    } else {
        cout << "Usuario o contraseña incorrectos." << endl;
    }

    return 0;
}