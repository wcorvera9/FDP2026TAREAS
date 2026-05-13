#include <iostream>
using namespace std;

int main () {
    int contador=0;

    cout << "ingresa un numero para inciar la cuenta regresiva:" << endl ;
    cin >> contador;
    
    do
    {
        cout << contador << endl;
        contador--;
    } while (contador >=0);
    cout << "Cuenta regresiva finalizada" << endl ;

    return 0;


}
