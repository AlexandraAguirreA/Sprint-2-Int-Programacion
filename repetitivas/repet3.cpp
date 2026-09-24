#include <iostream>
#include <clocale>
using namespace std;

/*Elabora un algoritmo que lea precios y calcule el total hasta 0. Ejemplo: 10,15,0 → 25.*/

int main(){
    setlocale(LC_ALL, "");

    int total_acum = 0, precio;

    do {
        cout << "Ingresa el precio que deseas sumar al total: " << endl;
        cin >> precio;
        total_acum += precio;
    } while (precio != 0);

    cout << "El valor total es de: " << total_acum << endl;

    return 0;
}