/*Deternubar un programa que lea dos numeros y determine cual de ellos es el mayor*/


#include<iostream>
using namespace std;

int main(){
    int n1,n2;

    //Nueva forma para que nos digite dos numeros en una sola exhibición
    cout<<"Digite 2 numeros: ";
    cin>>n1>>n2;

    if(n1>n2){
        cout<<"El mayor es: "<<n1<<endl;
    }else if(n1==n2){
        cout<<"Son iguales los numeros: "<<n1<<" y "<<n2<<endl;
    }else{
        cout<<"El mayor es: "<<n2<<endl;
    }

    return 0;
}