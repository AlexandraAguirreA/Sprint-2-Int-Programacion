#include <iostream>
#include <clocale>
using namespace std;

/*Elabora un algoritmo que indique Sobrepeso/No sobrepeso (IMC≥25). Ejemplo: 24.9 →No sobrepeso.*/

int main(){
    setlocale(LC_ALL, "");

    float imc;

    cout << "Ingresa el IMC: " << endl;
    cin >> imc;

    if (imc >= 25) {
        cout << "Sobrepeso." << endl;
    } else {
        cout << "No sobrepeso." << endl;
    }

    return 0;
}