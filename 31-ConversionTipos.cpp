// Conversion de tipos implicita y explicita
#include <iostream>

int main()
{

    //Explicita conversion
    double x = (int)3.1416;
    std::cout << x;

    //Implicita conversion
    int entero=19;
    double decimal;

    decimal=entero;

    return 0;
}