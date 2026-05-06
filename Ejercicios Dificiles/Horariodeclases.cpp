#include <iostream>
using namespace std;

int main()
{
    int Dia;

    cout << "Horario de clases" << endl;
    cout << "Ingrese el numero del dia de la semana (1-7): ";
    cin >> Dia;

    switch (Dia)
    {
    case 1:
        cout << "Lunes" << endl;
        cout << "Matematicas, Fisica, Quimica" << endl;
        break;
    case 2:
        cout << "Martes" << endl;
        cout << "Literatura, Historia, Geografia" << endl;
        break;
    case 3:
        cout << "Miercoles" << endl;
        cout << "Informatica, Biologia, Educacion Fisica" << endl;
        break;
    case 4:
        cout << "Jueves" << endl;
        cout << "Educacion Fisica, Tecnologia, Filosofia" << endl;
        break;
    case 5:
        cout << "Viernes" << endl;
        cout << "Economia, Psicologia, Sociologia" << endl;
        break;
    case 6:
        cout << "Sabado" << endl;
        cout << "Ingles" << endl;
        break;
    case 7:
        cout << "Domingo" << endl;
        cout << "Dia libre" << endl;
        break;
    default:
        cout << "Dia invalido. Por favor, ingrese un numero entre 1 y 7." << endl;
        break;
    }
    return 0;
}