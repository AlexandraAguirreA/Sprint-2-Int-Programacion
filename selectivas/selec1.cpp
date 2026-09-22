#include <iostream>
using namespace std;

int main (){
    string paswrd;

    cout<< "Ingresa tu contraseña para verificar si tiene la longitud adecuada: "<< endl;
    cin >> paswrd;
    
    if (paswrd.length() >= 8) {
        cout << "Tu contraseña tiene una longitud adecuada."<< endl;
    }
    
    
    return 0;
}