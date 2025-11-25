/*Comprobar si una vocal es mayuscula, minuscula o no es vocal*/
#include <iostream>

using namespace std;

int main()
{

    char letra;

    cout << "Ingrese letra a evaluar si es mayus,minus o no es vocal";
    cin >> letra;

    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "La letra que ingresaste es una vocal minuscula";
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "La letra ingresada es una vocal mayuscula";
        break;
    default:
        cout << "Ingresaste un caracter que no es una vocal";
        break;
    }

    return 0;
}