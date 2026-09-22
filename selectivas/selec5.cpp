#include <iostream>
using namespace std;

int main (){
    int cat_prod;
    
    cout << "Ingrese la categoria a la que pertenece el producto del (1) al (5) :" << endl;
    cin >> cat_prod;

    switch (cat_prod)
    {
    case 1:
        cout << "El impuesto sera del 2%"<<endl; 
        break;
    case 2: 
        cout << "El impuesto sera del 4%"<<endl; 
        break;
    
    case 3: 
        cout << "El impuesto sera del 6%"<<endl; 
        break;
    
    case 4:
        cout << "El impuesto sera del 8%"<<endl; 
        break;
    
    case 5: 
        cout << "El impuesto sera del 10%"<<endl; 
        break;
    
    default:
        cout << "Debes elegir un numero del 1 al 5."<<endl;
        break;
    }

    return 0;
}
