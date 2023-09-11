// P003_Variables_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//  

#include <iostream>
#

int main()
{
    //Variables creación 
    //tipo de variable "nombre de la variable" = "inicialización 
    bool mi_primer_booleano = true;
    int mi_primer_entero = 0; 
    float mi_primer_flotante = 0.0;
    char mi_primer_caracter = 'a';
    char mi_primer_cadenadecaracteres[100] = "Hola vato";
    std::string mi_primer_string = "alo chavalitos"; 

    //Mostrar al usuario lo que creamos de variables 
    std::cout << "Muy buenos días Mau espero estes bien\n";
    std::cout << "En el booleano tienes guardado: " <<
        mi_primer_booleano << std::endl;
    std::cout << "En el entero tienes guardado: " <<
        mi_primer_entero << std::endl;
    std::cout << "En el flotante tienes guardado: " <<
        mi_primer_flotante << std::endl;
    std::cout << "En el caracter tienes guardado: " <<
        mi_primer_caracter << std::endl;
    std::cout << "En la cadena tienes guardado: " <<
        mi_primer_cadenadecaracteres[100] << std::endl;
    std::cout << "En el string tienes guardado: " <<
        mi_primer_string << std::endl;

    //Solicitar al usuario cambios
    std::cout << "usuario dame por favor un 0 o 1;" <<
        std::endl;
    std::cin >> mi_primer_booleano;
    std::cout << "En el booleano tienes guardado: " <<
        mi_primer_booleano << std::endl;
    
    //Solicitar al usuario cada una de las variables
    std::cout << "usuario dame por favor un boleano;" <<


}
    std::cout << "Hello World!\n";
}

