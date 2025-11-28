// Funciones utiles
// Max de vuelve el numero mayor
// Min devuelve el minimo
// Pow potencia y luego las veces que quieras elevar
//Sqrt para sacar raiz
#include <iostream>
#include <cmath> 

int main()
{
    double x = 3;
    double y = 4;
    double z;
    double g;
    double b;

    z = std::max(x, y);
    g = std::min(x, y);
    b = std::pow(x, 2);

    std::cout << z;
    std::cout << g;

    return 0;
}