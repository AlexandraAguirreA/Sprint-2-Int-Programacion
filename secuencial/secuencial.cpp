#include <iostream>
#include <clocale>
using namespace std;

/*Elabora un algoritmo que calcule la frecuencia cardiaca máxima estimada (220−edad)
y el rango de entrenamiento (50%–85%). Ejemplo: 30 años → FCmáx=190, rango 95–
161.5.*/

int main(){
    setlocale(LC_ALL, "");

    double edad, fc_max, lim_inf, lim_sup;
    
    cout << "Ingresa tu edad: " << endl;
    cin >> edad;

    fc_max = 220 - edad;
    lim_inf = fc_max * 0.50;
    lim_sup = fc_max * 0.85;

    cout << "Tu frecuencia cardiaca máxima estimada es: " << fc_max << endl;
    cout << "Rango de entrenamiento: " << lim_inf << " - " << lim_sup << endl;

    return 0;
}