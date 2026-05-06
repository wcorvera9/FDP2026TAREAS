#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operacion;

    cout << "Bienvenido a la Calculadora Avanzada" << endl;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese la operación que desea realizar: ";
    cout << "Suma (+), Resta (-), Multiplicación (*), División (/): ";
    cin >> operacion;

    switch (operacion)
    {
    case '+':
        cout << "Resultado: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Resultado: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Resultado: " << num1 * num2 << endl;
        break;
    case '/':
        cout << "Resultado: " << num1 / num2 << endl;
        break;
    default:
        cout << "Operación no válida. Por favor, ingrese una operación correcta." << endl;
        break;
    }

    return 0;
}