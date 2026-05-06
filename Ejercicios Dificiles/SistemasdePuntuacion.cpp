#include <iostream>
using namespace std;

int main()
{

    int Estrellas;
    int Puntos;

    cout << "Bienvenido a su sistema de puntuación" << endl;
    cout << "Ingrese la cantidad de estrellas que obtuvo (1-5): ";
    cin >> Estrellas;

    switch (Estrellas)
    {
    case 1:
        Puntos = 1;
        cout << "Puntuacion mas baja obtenida " << endl;
        break;
    case 2:
        Puntos = 2;
        cout << "Puntuacion baja" << endl;
        break;
    case 3:
        Puntos = 3;
        cout << "Puntuacion media, puede mejorar: " << endl;
        break;
    case 4:
        Puntos = 4;
        cout << "Puntuacion alta " << endl;
        break;
    case 5:
        Puntos = 5;
        cout << "Puntuacion excelente, !felicidades¡" << endl;
        break;
    default:
        cout << "Entrada invalida. Por favor, ingrese un numero entre 1 y 5." << endl;
    }
}