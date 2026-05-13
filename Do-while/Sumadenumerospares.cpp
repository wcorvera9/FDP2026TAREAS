#include <iostream>
using namespace std;

int main() {
    int N, i = 1, suma = 0;

    cout << "Ingrese un numero " << endl;
    cin >> N;

    while (i <= N) {
        if (i % 2 == 0)
            suma = suma + i;
        i = i + 1;
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}