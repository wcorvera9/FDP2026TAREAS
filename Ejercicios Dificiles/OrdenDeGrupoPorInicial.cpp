    #include <iostream>
using namespace std;

int main() {
    
    char inicial;

    cout << "Bienvenido al programa de orden de grupo por inicial" << endl;
    cout << "Ingrese la incial de su apellido:" << endl;
    cin >> inicial;

    switch (inicial) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'M':
        cout << "Pertenece al grupo 1" << endl;
            break; 
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        cout << "Pertenece al grupo 2" << endl;
        break;
        default:
        cout << "Inicial no valida. Por favor, ingrese una letra mayuscula." << endl;
        break;

        return 0;

    }
} 