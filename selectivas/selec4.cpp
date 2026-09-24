#include <iostream>
#include <clocale>
using namespace std;

/*Elabora un algoritmo que indique Acceso permitido/Denegado si la clave coincide.
Ejemplo: clave=1234, ingresa 1234 → Permitido.*/

int main(){
    setlocale(LC_ALL, "");

    string clave, clave_usr;
    clave = "Pass123";

    cout << "Ingresa la clave: " << endl;
    cin >> clave_usr;
    
    if (clave_usr == clave) {
        cout << "Acceso permitido." << endl;
    } else {
        cout << "Acceso denegado." << endl;
    }

    return 0;
}