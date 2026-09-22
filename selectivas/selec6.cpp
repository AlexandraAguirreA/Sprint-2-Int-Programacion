#include <iostream>
using namespace std;

int main(){

    int dia;

    cout << "Ingresa un numero del 1 al 6 para confirmar la hora de cierre: "<<endl;
    cin >> dia;

    switch (dia)
    {
    case 1:
        cout << "La hora de cierre son las 17:00 hrs." <<endl;
        break;
    case 2:
        cout << "La hora de cierre son las 17:00 hrs." <<endl;
        break;
    case 3:
        cout << "La hora de cierre son las 17:00 hrs." <<endl;
        break;
    case 4:
        cout << "La hora de cierre son las 17:00 hrs." <<endl;
        break;
    case 5:
        cout << "La hora de cierre son las 17:00 hrs." <<endl;
        break;
    case 6:
        cout << "La hora de cierrre es a las 13:00 hrs." <<endl;
        break;
    default:
        cout << "Ingresa dia del 1 al 6.";
        break;
    }

    return 0;
}