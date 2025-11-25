#include <iostream>

using namespace std;

int main()
{
    float practicas, teoria, participacion, resultado = 0;

    cout << "Ingrese nota de  prácticas: ";
    cin >> practicas;
    cout << "Ingrese nota de teoria: ";
    cin >> teoria;
    cout << "Ingrese nota de participacion: ";
    cin >> participacion;
    
    practicas*=0.30;
    teoria*=0.60;
    participacion*=0.10;

    resultado=practicas+teoria+participacion;

    cout << "El resultado de sus 3 notas total es: " << resultado << endl;

    return 0;
}