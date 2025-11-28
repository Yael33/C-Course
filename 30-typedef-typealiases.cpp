// Typedef es para asignar un tipo de nombre alternativo a datos existentes
//Ahorita no lo vemos pero en cuanto usemos vectores es más fácil
#include <iostream> 

typedef std::string text_t;
typedef int numero_t;
using texto_t=std::string;
using numerito_t=int;

int main(){

//En vez de usar string 
text_t nombre='Yael';
std::cout<<nombre<<std::endl;

numero_t numero=39;


    return 0;
}
