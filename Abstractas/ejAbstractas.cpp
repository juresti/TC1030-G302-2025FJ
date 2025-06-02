
#include "TelefonoFijo.h"
#include "TelefonoMovil.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    TelefonoFijo casa{3};
    casa.comunicar();
    cout << casa.toString() << endl;

    TelefonoMovil miCel{};
    miCel.comunicar();
    cout << miCel.toString() << endl;
    return 0;
}
