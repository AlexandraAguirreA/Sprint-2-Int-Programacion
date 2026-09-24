#include <iostream>
using namespace std;

int main(){
    
    int num, contador=0;
    do
    {
        cout<< "Ingresa la serie de numeros que deseas contar los negativos uno por uno"<<endl;
        cin>> num;
        if (num < 0)
        {
            contador++;
        }    
    } while (num != 99999);
    cout << "El total de numero negativos de tu serie es: "<< contador << endl;
    return 0;
}