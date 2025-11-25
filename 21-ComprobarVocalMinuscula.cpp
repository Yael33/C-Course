/*Escriba un programa que lea la entrada de un caracter e indique en la salida
si es una vocual minuscula o no */

#include <iostream>
using namespace std;

int main()
{
    char letra;

    cout << "Digite un caracter: ";
    cin >> letra;
    // Forma nueva de que sea el mismo codigo para todas las opciones porque no hay break
    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Es una vocal minuscula";
        break;
    default:
        cout << "No es una vocal minuscula";
        break;
    }

    return 0;
}