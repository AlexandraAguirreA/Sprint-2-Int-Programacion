#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>

/*Elabora un algoritmo que genere N números aleatorios en [0,1) y calcule su promedio
(usa rand()/srand()). Ejemplo: N=5 → 0.52.*/

using namespace std;

int main(){
    setlocale(LC_ALL, "");
    srand(static_cast<unsigned int>(time(0)));

    int i, cantidad;
    float total = 0.0f, num_alt, promedio;

    cout << "Ingresa la cantidad de números aleatorios de los que deseas calcular el promedio: " << endl;
    cin >> cantidad;

    for (i = 0; i < cantidad; i++) {
        num_alt = rand() / (RAND_MAX + 1.0);
        cout << num_alt << endl;
        total += num_alt;
    }

    promedio = total / cantidad;
    cout << "El promedio de estos números es: " << promedio << endl;
    return 0;
}