
#ifndef TFIJO_H
#define TFIJO_H

#include "Telefono.h"
#include <string>
using namespace std;
class TelefonoFijo : public Telefono{
private:
    int numLineas;
public:
    TelefonoFijo(int nl);
    bool comunicar();
    string toString();
}; //TelefonoFijo

#endif
