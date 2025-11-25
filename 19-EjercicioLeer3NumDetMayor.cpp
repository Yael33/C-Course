/*Leer 3 numeros y determinar cual es el numero mayor
No usar mayor o igual que
*/

#include <iostream>
using namespace std;
 

int main(){
    int n1,n2,n3;

    cout<<"Ingrese 3 numeros enteros para ver cual es mayor: ";
    cin>>n1>>n2>>n3;

    if(n1>n2 && n1>n3){
        cout<<"El numero mayor es: "<<n1<<endl;
    }else if (n2>n1 && n2>n3)
    {
        cout<<"El numero mayor es: "<<n2<<endl;
    }else if(n3>n1 && n3>n2){
        cout<<"El numero mayor es: "<<n3<<endl;
    }else{
        cout<<"Algún numero es igual a otro"<<endl;
    }
    return 0;
}