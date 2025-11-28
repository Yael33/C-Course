
#include <iostream>

int main()
{

    std::string nombre;
    nombre = "Yael";

    std::cout << nombre.length();

    // Empty nos devuelve si está vacia o no en true o false en booleano
    std::cout << nombre.empty();

    // Metodo para limpiar la variable que contenga un string
    nombre.empty();
    std::cout << nombre;

    // Metodo para agregar aparte del nombre o algo una cadena con append
    // Nos dice que sirve para mas cosas pero principalmente para eso
    nombre.append("@gmail.com");

    // At nos da el caracter que se encuentre
    char pos;

    pos = nombre.at(0);
    // Lo guardamos en posicion y nos entrega la letra Y que es la primera
    std::cout << pos;
    // Insert sirve para insertar el caracter y se puede utilizar para muchas cosas más
    nombre.insert(5, "ApellidoXD");
    // Nota a mi parecer (todavía no tocamos punteros ) pero siento que sirve para vectores

    // Find para buscar y nos retorna la posición
    pos = nombre.find("ApellidoXD");
    std::cout << pos;

    //Eliminar porcion de cadena podemos poner -1 para el ultimo caracter o los caracteres que querramos cortar
    nombre.erase(5,-1);
    return 0;
}