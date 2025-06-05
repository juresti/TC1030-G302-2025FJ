
#ifndef CAFETERA_H
#define CAFETERA_H

#include <string>
using namespace std;
class Cafetera{
private:
    float capacidad;
    int tazasXSegundo;
public:
    Cafetera(float cap,int tazas);
    string toString();
    friend int operator +(Cafetera &c1,Cafetera &c2);
    friend int operator +(int d,Cafetera &c1);
};//Cafetera

#endif
