/*Hacer un programa que lea la entrada de 3 numeros luego que lea un cuarto numero e indicar si el numero concide con algunos de los 
numeros introducidos con anterioridad*/
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;
    cout << "Ingrese 3 numeros y el 4to numero será checado si hay coincidencia con los 3 anteriores: ";
    cin >> n1 >> n2 >> n3 >> n4;

    if (n1 == n4 || n2 == n4 || n3 == n4)
    {
        cout << "El 4to numero tiene coincidencia con alguno de los 3 primeros ingresados";
    }
    else
    {
        cout << "No hay coincidencias de numero";
    }

    return 0;
}