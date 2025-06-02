
#ifndef SISCOM_H
#define SISCOM_H

#include <string>
using namespace std;

class SistemaComunicacion{
private:
    bool comunicando;
protected:
    string tipoComunicacion;
    SistemaComunicacion(string tipo);
public:
    virtual bool comunicar() = 0;
    bool isComunicando();
    void setComunicando(bool val);
};//SistemaComunicacion

#endif
