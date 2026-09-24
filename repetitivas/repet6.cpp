#include <iostream>
#include <vector>
#include <clocale>
using namespace std;

/*Elabora un algoritmo que compute la media y varianza de N valores. Ejemplo: N=4, 2 4
6 8 → media 5, var 5.*/

int main(){
    setlocale(LC_ALL, "");

    int i, n;

    cout << "Ingrese la cantidad de valores de los que desea obtener la media y la varianza: " << endl;
    cin >> n;

    vector<double> valores(n);
    double media, dif, var;
    double suma = 0.0;
    double suma_cua = 0.0;

    for (i = 0; i < n; i++) {
        cout << "Ingrese el valor " << (i + 1) << ": " << endl;
        cin >> valores[i];
        suma += valores[i];
    }
    media = suma / n;

    for (i = 0; i < n; i++) {
        dif = valores[i] - media;
        suma_cua += dif * dif;
    }
    var = suma_cua / n;

    cout << "La media de tu serie es: " << media << endl;
    cout << "La varianza de tu serie es: " << var << endl;

    return 0;
}