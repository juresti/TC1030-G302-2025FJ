#include "Electrodomestico.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    Electrodomestico elec1{};
    cout << "Valor encendido: " << elec1.isEncendido() << endl;
    elec1.setEncendido(true);
    cout << elec1.toString() << endl;
    return 0;
}
