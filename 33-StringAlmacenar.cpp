/*Almacenar datos en string 
Gracias a la funcion getline que deja de capturar hasta que haya enter
*/

#include <iostream>
#include <string>

//Si necesitamos leer una cadena con espacio y get line puede capturar espacios a diferencia de std
int main(){
    std::string nombre;

    std::cout<<"Ingresa el nombre";
    std::getline(std::cin,nombre);



    return 0;
}