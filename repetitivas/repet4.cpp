#include <iostream>
#include <clocale>
using namespace std;

/*Elabora un algoritmo que lea números y cuente negativos hasta 99999. Ejemplo: −2, 4,
−1, 99999 → 2.*/

int main(){
    setlocale(LC_ALL, "");

    int num, contador = 0;
    do {
        cout << "Ingresa la serie de números que deseas contar los negativos, uno por uno: " << endl;
        cin >> num;
        if (num < 0) {
            contador++;
        }
    } while (num != 99999);

    cout << "El total de números negativos de tu serie es: " << contador << endl;
    return 0;
}