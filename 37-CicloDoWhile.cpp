

#include <iostream>
// La diferencia al while es que se ejecuta minimo una vez
int main()
{
    int i = 1;

    do
    {
        std::cout << "Ejecutar mientras o hacer mientras: " << i << std::endl;
        i++;
    } while (i <= 3);

    return 0;
}