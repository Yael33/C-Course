//Sacar la hipotenusa cateto1 y cateto2 al cuadrado y la hipotenusa es la suma de ambos 
#include <iostream>
#include <math.h>
//Lo de math para poder usar pow y que eleve al cuadrado
using namespace std;

int main()
{
    float cateto1,cateto2,hipotenusa=0;

    cout<<"Ingrese cateto 1: ";
    cin>>cateto1;
    cout<<"Ingrese cateto 2: ";
    cin>>cateto2;

    hipotenusa=(pow(cateto1,2)+pow(cateto2,2));

    cout<<"El resultado de la hipotenusa es: "<<hipotenusa<<endl;

    return 0;
}