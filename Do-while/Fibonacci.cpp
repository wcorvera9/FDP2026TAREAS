#include <iostream>
using namespace std;

int main()
{
    int Num, termino = 1;
    int a = 0, b = 1;
    int siguiente;

    cout << "Escriba un numero de terminos" << endl;
    cin >> Num;

    cout << "Serie de Fibonacci:" << endl;

    while (termino <= Num)
    {
        cout << "Termino " << termino << ": " << a << endl;

        // Calcular el siguiente término
        siguiente = a + b;
        a = b;
        b = siguiente;
        termino++;
    }

    return 0;
}