//ESCRIBA UN FRAGMENTO QUE INTERCAMBIE VALORES DE DOS VARIABLES

#include<iostream>

using namespace std;

int main(){
    int x,y,aux;
    
    cout<<"Digite el valor de x"; cin>>x;
    cout<<"Digite el valor de y";cin>>y;
    
    aux=x;
    x=y;
    y=aux;
    
    cout<<"El resultado de las variables cambiadas es: x "<<x<<"y "<<y<<endl;
    
    
 
 return 0;   
}
