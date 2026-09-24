#include <iostream>
#include <limits>
#include <clocale>
using namespace std;

/*Elabora un algoritmo que encuentre el máximo de N números. Ejemplo: N=5, [3,9,1,8,2]
→ 9.*/

int main(){
    setlocale(LC_ALL, "");

    int n = 0, n_aux = numeric_limits<int>::min(), contador = 0, cantidad;

    cout << "Ingresa la cantidad de números de los que quieres calcular el máximo: " << endl;
    cin >> cantidad;

    while (contador < cantidad) {
        cout << "Ingresa la serie de números, uno por uno: " << endl;
        cin >> n;
        if (n > n_aux) {
            n_aux = n;
        }
        contador++;
    }

    cout << "El número más grande de tu serie de números es: " << n_aux << endl;

    return 0;
}