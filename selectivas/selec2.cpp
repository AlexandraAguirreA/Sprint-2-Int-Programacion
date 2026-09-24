#include <iostream>
#include <clocale>
using namespace std;

/*Elabora un algoritmo que muestre “Dentro de presupuesto” si costo ≤ presupuesto. 
Ejemplo: 950 ≤ 1000 → Dentro de presupuesto.*/

int main (){
    setlocale(LC_ALL, "");

    double costo, presup;

    cout << "Ingresa el costo: " << endl;
    cin >> costo;

    cout << "Ingresa el presupuesto: " << endl;
    cin >> presup;

    if (costo <= presup) {
        cout << "El costo está dentro del presupuesto." << endl;
    }
    
    return 0;
}