/*Los namespace necesitan un nombre unico y proporciona una solución
para evitar conflicto de nombre*/

namespace primero
{
    int x = 1;
}

namespace segundo
{
    int x = 2;
}

#include <iostream>

int main()
{
    // Para usar o que imprima x el valor de 1
    // using namespace primero y mandamos a imprimir
    // std::cout<<"x "<<x; y nos dará el numero 1
    int x = 0;

    std::cout << x;

    std::cout << "La varibale a utilizar: " << primero::x;
    // Los dos puntos se conocen como operador de ambitos
    return 0;
}