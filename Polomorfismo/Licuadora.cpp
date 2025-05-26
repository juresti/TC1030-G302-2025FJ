#include "Licuadora.hpp"
#include <iostream>

Licuadora::Licuadora() : Electrodomestico{},numVelocidades{3},pulsarActivo{false} {}
Licuadora::Licuadora(int nv) : Electrodomestico{},numVelocidades{nv}, 
                                pulsarActivo{false} {}

std::string Licuadora::dimeFuncionActual(){
    return Electrodomestico::dimeFuncionActual() + "tiene " + 
            std::to_string(numVelocidades) +
            " velocidades y pulsar esta " + std::to_string(pulsarActivo) + ".\n";
}

void Licuadora::licuar(){
    if (isEncendido()){
        cambiaFuncionActual("Licuando...");
        std::cout << "Licuando \n";
    } else {
        std::cout << "Licuadora apagada. Enciendala!\n";
    }
}