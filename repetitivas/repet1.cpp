#include <iostream> 
#include <limits>
using namespace std;

int main(){
    
    int n=0, n_aux=numeric_limits<int>::min(), contador=0, cantidad;

    cout << "Ingresa la cantidad de numeros de los quieres calcular el maximo: "<<endl;
    cin >> cantidad; 

    while (contador<cantidad){
        cout << "Ingresa la serie de numeros 1 por 1: "<<endl;
        cin >> n;
        if (n>n_aux){
            n_aux = n;
        }
        contador++;
    }
    cout << "El numero mas grande de tu serie de numeros es: "<< n_aux <<endl;

    return 0;
}