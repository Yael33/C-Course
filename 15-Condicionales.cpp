/* Sentencia if*/
#include<iostream>

using namespace std;

int main(){

    int numero,dato=5;

    cout<<"Digite un numero: ";
    cin>>numero;

    if(numero==dato){
        cout<<"Es el mismo numero";
    }else if(numero<dato){
        cout<<"El numero es menor a "<<dato<<endl;

    }else{
        cout<<"El numero ingresado es mayor a es mayor";
    }

    return 0;
}