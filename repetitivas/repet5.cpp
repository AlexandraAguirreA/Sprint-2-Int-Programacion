#include <iostream> 
#include <stdlib.h> 
#include <ctime> 

using namespace std;

int main(){
    srand(time(0));
    
    int i, cantidad;
    float total, num_alt, promedio;

    cout<<"Ingresa la cantidad de numero aleatorios de los que deseas calcular el promedio: "<< endl;
    cin>>cantidad;

    for (i=0; i<cantidad;i++){
        num_alt = rand() / (RAND_MAX + 1.0);
        cout<< num_alt<<endl;
        total += num_alt;
    }

    promedio = total / cantidad;
    cout << "El promedio de estos numeros es: "<<promedio<<endl;
    return 0;
}