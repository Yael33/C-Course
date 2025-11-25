//EXPRESIONES 
//a/b + 1 
#include<iostream>

using namespace std; 



int main()[
float a,b,resultado=0;
cout<<"Ingresa el valor de A";
cin>>a;
cout<<"Ingresa el valor de B";
cin>>b;

resultado=(a/b)+1;
cout.precision(2);

cout<<"\nEl resultado es "<<resultado<<endl;

//Para redondear es cout.precision(2) el numero 2 son los digitos a redondear del decimal

return 0;
}
