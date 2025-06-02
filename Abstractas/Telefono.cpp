
#include "Telefono.h"
#include <string>
#include <iostream>
using namespace std;

Telefono::Telefono(string num) : SistemaComunicacion("Voz y Sonido"),encendido{0},numero{num} {}

void Telefono::encender() {encendido = 1;}
void Telefono::apagar() {encendido = 0;}
string Telefono::getNumero() {return numero;}
bool Telefono::marcar(string num){
    cout << "Marcando el numero: " << num << endl;
    return true;
}
