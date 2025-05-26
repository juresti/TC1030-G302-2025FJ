#include "Microondas.hpp"

Microondas::Microondas() : Electrodomestico{}, capacidad{1.5}, color{"Blanco"} {}
Microondas::Microondas(float ca,std::string co) : Electrodomestico{}, capacidad{ca},
                                                color{co} {}

                            
std::string Microondas::dimeFuncionActual(){
    return Electrodomestico::dimeFuncionActual() + " la capacidad es " +
            std::to_string(capacidad) + " y el color es " + color + ".\n";
}


std::string Microondas::calentadoRapido(){
    if (isEncendido()){
        cambiaFuncionActual("Calentando...");
        return "Calentando rapidamente ...";
    } else
        return "Enciende primero el microondas!";
}
