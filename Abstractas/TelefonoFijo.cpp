
#include "TelefonoFijo.h"
#include <iostream>

TelefonoFijo::TelefonoFijo(int nl) : Telefono("55 2365 9814"),numLineas{nl} {}
bool TelefonoFijo::comunicar(){
    cout << "Iniciando la comunicacion con tu telefono fijo\n";
    return true;
}

string TelefonoFijo::toString(){
    return "TelefonoFijo(" + tipoComunicacion + "," + to_string(isComunicando()) + "," +
                getNumero() + "," + to_string(numLineas) + ")";
}
