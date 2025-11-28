

#include <iostream>

int main()
{
    int numero = 10;
    std::string resultado;

    if (numero % 2 == 0)
    {
        resultado = "Par";
    }
    else
    {
        resultado = "Impar";
    }
    // Operador ternario en c++ xd parecido a los demás sólo que igual podemos declarar la variable 
    //Y no necesariamente en una linea el std se puede declarar antes y luego hacer la operación
    std::string resultado2 = (numero % 2 == 0) ? "Par" : "Impar";

    return 0;
}