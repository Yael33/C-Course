//Escribir un programa que lea la nota de 4 alumnos y calcular la nota final media

#include<iostream>

using namespace std;

int main(){
 
 float a1,a2,a3,a4,total=0;
 
 cout<<"Ingrese nota de alumno 1";
 cin>>a1;
 cout<<"Ingrese nota de alumno 2";
 cin>>a2;
 cout<<"Ingrese nota de alumno 3";
 cin>>a3;
 cout<<"Ingrese nota de alumno 4";
 cin>>a4;
 
 total=((a1+a2+a3+a4)/4);
 
 cout<<"La media es: "<<total<<endl;  
    
    return 0;
}
