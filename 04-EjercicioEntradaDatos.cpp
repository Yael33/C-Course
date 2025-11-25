//EJERCICIO SUMA RESTA MULTI Y DIVISIÓN DE DOS NUMEROS 

#include<iostream>

using namespace std;

int main(){
    int numero1,numero2,suma=0,resta=0,multiplicacion=0,division=0;
    
    cout<<"Ingrese primer numero entero";
    cin>>numero1;
    cout<<"Ingrese segundo numero entero";
    cin>>numero2;
    
    suma=numero1+numero2;
    resta=numero1-numero2;
    multiplicacion=numero1*numero2;
    division=numero1/numero2;
    
    cout<<"Los resultados son: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es :"<<multiplicacion<<endl;
    cout<<"La division es: "<<division<<endl;
    
    return 0;
   
}
