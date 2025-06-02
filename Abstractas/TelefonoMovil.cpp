
#include "TelefonoMovil.h"
#include <string>
#include <iostream>
using namespace std;

TelefonoMovil::TelefonoMovil() : Telefono("55 1234 9874"),pctBateria{100} {}

string TelefonoMovil::avisarBateriaBaja(){
    if (pctBateria < 15) return "Bateria baja";
    else return "Bateria normal";
}

bool TelefonoMovil::cargarBateria(){
    cout << "Cargando la bateria de tu movil\n";
    pctBateria = 100;
    return true;
}

bool TelefonoMovil::comunicar(){
    cout << "Iniciando la comunicacion mediante tu telefono movil\n";
    return true;
}

string TelefonoMovil::toString(){
    return "TelefonoMovil(" + tipoComunicacion + "," + to_string(isComunicando()) + "," +
                getNumero() + "," + to_string(pctBateria) + ")";
}
