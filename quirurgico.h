#ifndef QUIRURGICO_H
#define QUIRURGICO_H
#include <iostream>
#include "tratamiento.h"
#include "DtFecha.h"

using namespace std;

class Quirurgico : public Tratamiento {
    private:
        DtFecha fechaCirugia;
    public:
        Quirurgico();
        Quirurgico(DtFecha);
        ~Quirurgico();
};

#endif