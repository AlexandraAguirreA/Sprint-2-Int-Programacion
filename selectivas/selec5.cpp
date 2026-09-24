#include <iostream>
#include <clocale>
using namespace std;

/*Elabora un algoritmo que, según categoría de producto (1..5), muestre impuesto (2%,
4%, 6%, 8%, 10%). Ejemplo: 4 → 8%.*/

int main (){
    setlocale(LC_ALL, "");

    int cat_prod;
    
    cout << "Ingrese la categoría a la que pertenece el producto del (1) al (5): " << endl;
    cin >> cat_prod;

    switch (cat_prod)
    {
    case 1:
        cout << "El impuesto será del 2%." << endl;
        break;
    case 2:
        cout << "El impuesto será del 4%." << endl;
        break;
    case 3:
        cout << "El impuesto será del 6%." << endl;
        break;
    case 4:
        cout << "El impuesto será del 8%." << endl;
        break;
    case 5:
        cout << "El impuesto será del 10%." << endl;
        break;
    default:
        cout << "Debes elegir un número del 1 al 5." << endl;
        break;
    }

    return 0;
}
