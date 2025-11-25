/*Escriba un programa que solicite una edad(entero) e indique la salida
si la edad está entre el rango de 18 a 25 */

#include <iostream>
using namespace std;

int main()
{
    int edad;

    cout << "Digite su edad";
    cin >> edad;

    if (edad >= 18 && edad <= 25)
    {
        cout << "La edad está en rango de 18 a 25";
    }
    else
    {
        cout << "La edad está fuera de rango";
    }

    return 0;
}