#ifndef ELECTRO_HPP
#define ELECTRO_HPP

#include <string>

class Electrodomestico{
private:
    bool encendido;
protected:
    std::string funcionActual;
    
    Electrodomestico();
public:
    bool isEncendido();
    //void setEncendido(bool); eliminada por redundancia con encender() y apagar()

    std::string virtual dimeFuncionActual();
    void virtual cambiaFuncionActual(std::string);

    void virtual encender();
    void virtual apagar();

    std::string virtual toString();
};

#endif
