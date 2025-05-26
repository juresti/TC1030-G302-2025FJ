#ifndef LICUA_HPP
#define LICUA_HPP

#include "Electrodomestico.hpp"

class Licuadora : public Electrodomestico{
private:
    int numVelocidades;
    bool pulsarActivo;
public:
    Licuadora();
    Licuadora(int);

    std::string dimeFuncionActual();


    void licuar();
};

#endif
