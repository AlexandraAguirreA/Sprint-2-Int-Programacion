#include <iostream>
using namespace std;

int main(){

    float i = 1, num, sum_tot = 0;

    cout << "Ingrese el numero que desee sumar a la serie: " << endl;
    cin >> num;

    while (i <= num){
        sum_tot += 1/i;
        i++;
    }

    cout << "La suma de la serie es: " << sum_tot << endl;

    return 0;
}