#include <iostream>
using namespace std;

int main(){
    int total_acum=0, precio;

    do
    {
        cout<< "Ingresa el precio que deseas sumar al total: "<< endl;
        cin >> precio;
        total_acum += precio;
        /* code */
    } while (precio != 0);
    
    cout<< "El valor total es de: "<< total_acum<<endl;

    return 0;
}