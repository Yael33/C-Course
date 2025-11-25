/*Sentencia Switch*/

#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "Digite una opcion del 1 al 5";

    switch (numero)
    {
    case 1:
        cout << "Es el numero 1 ";
        break;
    case 2:
        cout << "Es el numero 2 ";
        break;
    case 3:
        cout << "Es el numero 3 ";
        break;
    case 4:
        cout << "Es el numero 4 ";
        break;
    case 1:
        cout << "Es el numero 5 ";
        break;
    default:
        cout << "No está en el rango del 1 al 5 ";
        break;
    }

    return 0;
}