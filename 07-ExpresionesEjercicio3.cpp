//EXPRESION MATEMATICA 
// (A+ (B/C)) /(D+(E/F)

#include<iostream>
using namespace std; 

int main(){
    float a,b,c,d,e,f,resultado=0;
    
    cout<<"INGRESE LETRA A";
    cin>>a;
    cout<<"INGRESE LETRA B";
    cin>>b;
    cout<<"INGRESE LETRA C";
    cin>>c;
    cout<<"INGRESE LETRA D";
    cin>>d;
    cout<<"INGRESE LETRA E";
    cin>>e;
    cout<<"INGRESE LETRA F";
    cin>>f;
    
    
    resultado=(a+(b/c))/(d+(e/f));
    
    cout<<"EL RESULTADO ES: "<<resultado<<endl;
 
 
 return 0;   
}
