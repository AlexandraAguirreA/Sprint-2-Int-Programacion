#include <iostream>

using namespace std;
int main(){

    double edad, fc_max, lim_inf, lim_sup;
    
    cout<<"Ingresa tu edad: " <<endl;
    cin>>edad;

    fc_max = 220 - edad;
    lim_inf = fc_max * 0.50;
    lim_sup = fc_max * 0.85;

    cout<<"Tu frecuencia cardiaca maxima estimada es: " << fc_max <<endl;
    cout<<"Rango de entrenamiento: "<<lim_inf <<" - " << lim_sup <<endl;

    return 0;
}