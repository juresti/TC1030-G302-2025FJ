//#include "Electrodomestico.hpp"
#include "Licuadora.hpp"
#include "Microondas.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
/* Pruebas realizadas funcionarion bien
    cout << "*** Pruebas de Electrodomestico ***\n";
    Electrodomestico elec{};
    cout << elec.toString() << endl;
    cout << "Esta encendido: " << elec.isEncendido() << endl;
    cout << "Su funcion es: " << elec.dimeFuncionActual() << endl;
    elec.encender();
    elec.cambiaFuncionActual("Funcionando");
    cout << elec.toString() << endl;
    elec.apagar();
    cout << "Esta encendido: " << elec.isEncendido() << endl;
*/

    cout << "*** Pruebas de Licuadora ***\n";
    Licuadora licuaDef{};
    Licuadora licua7{7};

    licuaDef.licuar();
    licuaDef.encender();
    licuaDef.licuar();
    cout << "Funcion actual: " << licuaDef.dimeFuncionActual() << endl;

    cout << "Pruebas de Microondas\n";
    Microondas microDef{};
    microDef.encender();
    microDef.calentadoRapido();
    cout << "Funcion actual: " << microDef.dimeFuncionActual() << endl;
    
    return 0;
}
