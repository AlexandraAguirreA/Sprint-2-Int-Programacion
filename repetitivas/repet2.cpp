#include <iostream>
#include <clocale>
using namespace std;

/*Elabora un algoritmo que sume la serie 1 + 1/2 + ... + 1/N. Ejemplo: N=3 → 1.5.*/

int main(){
    setlocale(LC_ALL, "");

    float i = 1, num, sum_tot = 0;

    cout << "Ingrese el número que desea sumar a la serie: " << endl;
    cin >> num;

    while (i <= num) {
        sum_tot += 1 / i;
        i++;
    }

    cout << "La suma de la serie es: " << sum_tot << endl;

    return 0;
}