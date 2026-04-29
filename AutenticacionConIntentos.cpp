
#include <iostream>
using namespace std;

int main() {
    string usuario, contrasena;
    int intentos = 0;

    cout << "Ingrese su nombre de usuario: ";
    cin >> usuario;
    cout << "Ingrese su contrasena: ";
    cin >> contrasena;

    if (usuario == "admin" && contrasena == "1234") {
        cout << "Bienvenido al sistema!" << endl;
    } else {
        intentos++;
        cout << "Incorrectos. Intento " << intentos << " de 3." << endl;

        cout << "Ingrese su nombre de usuario: ";
        cin >> usuario;
        cout << "Ingrese su contrasena: ";
        cin >> contrasena;

        if (usuario == "admin" && contrasena == "1234") {
            cout << "Bienvenido al sistema!" << endl;
        } else {
            intentos++;
            cout << "Incorrectos. Intento " << intentos << " de 3." << endl;

            cout << "Ingrese su nombre de usuario: ";
            cin >> usuario;
            cout << "Ingrese su contrasena: ";
            cin >> contrasena;

            if (usuario == "admin" && contrasena == "1234") {
                cout << "¡Autenticacion exitosa!" << endl;
            } else {
                intentos++;
                cout << "Incorrectos. Intento " << intentos << " de 3." << endl;
                cout << "Acceso denegado." << endl;
            }
        }   
    }       

    return 0;
}