#ifndef MICRO_HPP
#define MICRO_HPP

#include "Electrodomestico.hpp"
#include <string>

class Microondas : public Electrodomestico{
private:
    float capacidad;
    std::string color;
public:
    Microondas();
    Microondas(float,std::string);

    std::string dimeFuncionActual();


    std::string calentadoRapido();
};

#endif
