
#ifndef TMOVIL_H
#define TMOVIL_H

#include "Telefono.h"
#include <string>
using namespace std;

class TelefonoMovil : public Telefono{
private:
    int pctBateria;
public:
    TelefonoMovil();
    string avisarBateriaBaja();
    bool cargarBateria();
    bool comunicar();
    string toString();
}; //TelefonoMovil

#endif
