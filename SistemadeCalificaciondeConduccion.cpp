#include <iostream>
using namespace std;

int main() {
    int edad, experiencia, infracciones;
    string calificacion;

    
    cout << "Sistema de Calificacion de Conduccion" << endl;
    cout << "Ingrese la edad del conductor: ";
    cin >> edad;
    cout << "Ingrese anos de experiencia: ";
    cin >> experiencia;
    cout << "Ingrese numero de infracciones: ";
    cin >> infracciones;

   
    if (edad < 18) {
        calificacion = "No apto (Menor de edad)";
    } 
    else if (infracciones > 5) {
        calificacion = "Riesgo Alto (Exceso de infracciones)";
    } 
    else if (experiencia > 10 && infracciones == 0) {
        calificacion = "Conductor Maestro";
    } 
    else if (experiencia >= 2 && infracciones <= 2) {
        calificacion = "Conductor Estandar";
    } 
    else {
        calificacion = "Conductor en Observacion / Novato";
    }
    
    cout << "Resultado de la evaluacion: " << calificacion << endl;
    

    return 0;
}