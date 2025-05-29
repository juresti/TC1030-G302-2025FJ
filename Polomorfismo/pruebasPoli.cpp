//#include "Electrodomestico.hpp"
#include "Licuadora.hpp"
#include "Microondas.hpp"
#include <iostream>

using namespace std;

std::string funcionAparato(Electrodomestico &dispositivo){
    return dispositivo.dimeFuncionActual();//llamada polimorfica
}

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
    

    cout << "\n***** Pruebas de polimorfismo con apuntadores *****\n";
    Electrodomestico *aparato;
    aparato = &microDef; //apunta al microondas
    cout << "Funcion actual del microondas: " << aparato->dimeFuncionActual() << endl;

    aparato = &licua7; //apunta a la licuadora
    cout << "Funcion actual del licuadora: " << aparato->dimeFuncionActual() << endl;


    cout << "\n***** Pruebas de polimorfismo con funcion\n";
    cout << "Funcion del microondas: " << funcionAparato(microDef) << endl;
    cout << "Funcion de la licuadora: " << funcionAparato(licuaDef) << endl;
    cout << "Funcio de la licuadora 7: " << funcionAparato(licua7) << endl;
    return 0;
}
