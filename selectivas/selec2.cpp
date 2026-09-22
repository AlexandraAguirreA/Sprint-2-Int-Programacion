#include <iostream>
using namespace std;

int main (){
    string costo, presup;

    cout<< "Ingresa el costo: "<< endl;
    cin >> costo;

    cout<< "Ingresa el presupuesto: "<<endl;
    cin>> presup;

    if (costo <= presup) {
        cout << "El costo esta dentro del presupuesto."<< endl;
    }
    
    
    return 0;
}