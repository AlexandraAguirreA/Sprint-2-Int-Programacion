#include <iostream>
using namespace std;

int main(){
    string clave, clave_usr;
    clave = "Pass123";


    cout << "Ingresa la clave: "<<endl;
    cin >> clave_usr;
    
    if (clave_usr == clave){
        cout << "Accesso permitido."<<endl;
    } else {
        cout << "Accesso denegado." << endl;
    }
    


    return 0;
}