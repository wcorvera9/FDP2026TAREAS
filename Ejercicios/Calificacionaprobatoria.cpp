#include <iostream>
using namespace std;    

int main() {
    float calificacion;

    cout << "bienvenido a revision de calificaciones" << endl;
    cout << "ingrese su calificacion: ";
    cin >> calificacion;

    if (calificacion >= 6.0) {
        cout << "aprobado" << endl;
    } else {
        cout << "reprobado" << endl;
    }
    return 0;
}