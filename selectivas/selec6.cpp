#include <iostream>
#include <clocale>
using namespace std;

/*Elabora un algoritmo que, según el día (1..6), muestre hora de cierre (1-5: 17:00, 6:
13:00). Ejemplo: 5 → 17:00.*/

int main(){
    setlocale(LC_ALL, "");

    int dia;

    cout << "Ingresa un número del 1 al 6 para confirmar la hora de cierre: " << endl;
    cin >> dia;

    switch (dia)
    {
    case 1:
        cout << "La hora de cierre son las 17:00 hrs." << endl;
        break;
    case 2:
        cout << "La hora de cierre son las 17:00 hrs." << endl;
        break;
    case 3:
        cout << "La hora de cierre son las 17:00 hrs." << endl;
        break;
    case 4:
        cout << "La hora de cierre son las 17:00 hrs." << endl;
        break;
    case 5:
        cout << "La hora de cierre son las 17:00 hrs." << endl;
        break;
    case 6:
        cout << "La hora de cierre es a las 13:00 hrs." << endl;
        break;
    default:
        cout << "Ingresa un día del 1 al 6." << endl;
        break;
    }

    return 0;
}