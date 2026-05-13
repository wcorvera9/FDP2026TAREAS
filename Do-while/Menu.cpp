#include <iostream>
using namespace std;

int main() {
    int opcion = 0;

    do {
        // 1. Mostrar menú
        cout << "----MENU----" << endl;
        cout << "1. Saluda al usuario" << endl;
        cout << "2. Frase del dia" << endl;
        cout << "3. Salir" << endl;

        // 2. Leer opción
        cin >> opcion;

        // 3. Evaluar opción
        if (opcion == 1)
            cout << "HOLA USUARIO, BIENVENIDO" << endl;
        else if (opcion == 2)
            cout << "Si puedes graficarlo, puedes programarlo" << endl;
        else if (opcion == 3)
            cout << "Saliendo....." << endl;
        else
            cout << "Opcion no valida" << endl;

    } while (opcion != 3);

    return 0;
}