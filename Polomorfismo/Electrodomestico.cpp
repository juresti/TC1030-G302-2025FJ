#include "Electrodomestico.hpp"
#include <iostream>

Electrodomestico::Electrodomestico() : encendido{false},funcionActual{"Ninguna"} {}

bool Electrodomestico::isEncendido() {return encendido;}
//void Electrodomestico::setEncendido(bool v) {encendido = v;}

std::string Electrodomestico::dimeFuncionActual(){
    return funcionActual;
}
void Electrodomestico::cambiaFuncionActual(std::string nueva){
    funcionActual = nueva;
}


void Electrodomestico::encender() {
    if (!encendido)
        encendido = true;
    else 
        std::cout << "Ya esta encendido tu electrodomestico\n";
}
void Electrodomestico::apagar(){
    if (encendido)
        encendido =false;
    else 
        std::cout << "Ya esta apagado tu electrodomestico\n";
}

std::string Electrodomestico::toString(){
    return "Electrodomestico(" + std::to_string(encendido) + "," +
                            funcionActual + ")";
}
