#include <iostream>
#include <clocale>
using namespace std;

/*1. Elabora un algoritmo que muestre “Longitud adecuada” si la contraseña tiene ≥8
caracteres. Ejemplo: “abc12345” → Longitud adecuada.*/

int main (){
    setlocale(LC_ALL, "");

    string paswrd;

    cout << "Ingresa tu contraseña para verificar si tiene la longitud adecuada: " << endl;
    cin >> paswrd;
    
    if (paswrd.length() >= 8) {
        cout << "Tu contraseña tiene una longitud adecuada." << endl;
    }
    
    return 0;
}