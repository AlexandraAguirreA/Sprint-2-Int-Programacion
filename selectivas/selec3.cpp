#include <iostream>
using namespace std;

int main(){
    float imc;

    cout<< "Ingresa el IMC: " << endl;
    cin>> imc;

    if (imc >= 25){
        cout << "Sobrepeso." << endl;
    } else {
        cout << "No sobrepeso." << endl;
    }

    return 0;
}