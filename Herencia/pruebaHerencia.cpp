#include "Electrodomestico.hpp"
#include "Microondas.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "*** Pruebas de Electrodomestico ***\n";
    Electrodomestico elec1{};
    cout << "Valor encendido: " << elec1.isEncendido() << endl;
    elec1.setEncendido(true);
    cout << elec1.toString() << endl;

    cout << "\n*** Pruebas de Microondas ***\n";
    Microondas microDef{};
    Microondas micro{1.5,"Rojo"};
    cout << "Micro default: " << microDef.toString() << endl;
    cout << "Micro: " << micro.toString() << endl;
    cout << microDef.calentadoRapido() << endl;
    micro.encender();
    cout << micro.calentadoRapido() << endl;
    micro.apagar();
    cout << micro.toString() << endl;
    return 0;
}
