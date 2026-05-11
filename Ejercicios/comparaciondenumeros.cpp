#include <iostream>
using namespace std;    

int main() {
    int num1, num2;

    cout << "bienvenido a comparacion de numeros" << endl;

    cout << "Ingrese su primer numero: ";
    cin >> num1;
    cout << "Ingrese su segundo su segundo numero: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "Su numero mayor es: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "Su numero mayor es: " << num2 << endl;
    } 

    return 0;
}