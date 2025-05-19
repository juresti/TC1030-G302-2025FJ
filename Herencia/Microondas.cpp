#include "Microondas.hpp"
#include <iostream>

Microondas::Microondas() : Electrodomestico{},capacidad{1.0},color{"Blanco"} {}

Microondas::Microondas(float ca,std::string co) : Electrodomestico{}, capacidad{ca},
                                                    color{co} {}

std::string Microondas::calentadoRapido(){
    if (isEncendido())
        return "Calentando rapidamente tu comida...";
    else
        return "Enciende primero el microondas!";        
}

void Microondas::encender(){
    if (!isEncendido()){
        setEncendido(true);
        std::cout << "Se encendio tu microondas\n";
    } else
        std::cout << "Ya esta encendido\n";
}

void Microondas::apagar(){
    if (isEncendido()){
        setEncendido(false);
        std::cout << "Se apago tu microondas\n";
    } else
        std::cout << "Ya esta apagado\n";
}

std::string Microondas::toString(){
    return "Microondas(" + std::to_string(isEncendido()) + "," +
                    std::to_string(capacidad) + "," +
                    color + ")";
}
