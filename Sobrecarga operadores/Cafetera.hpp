#ifndef CAFE_HPP
#define CAFE_HPP

#include <string>

class Cafetera{
private:
    float capacidad;
    int tazasXmin;
    std::string nombre;
public:
    Cafetera(std::string,float,int);
    std::string toString();

    friend int operator +(Cafetera &c1,Cafetera &c2);
    friend int operator +(int num,Cafetera &c);
};

#endif
