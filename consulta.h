#ifndef CONSULTA_H
#define CONSULTA_H
#include <iostream>
#include "DtFecha.h"
#include "DtTime.h"

using namespace std;

class Consulta {
    private:
        DtFecha fechaCons;
        DtTime horaCons;
    public:
        Consulta();
        Consulta(DtFecha, DtTime);
        ~Consulta();
};

#endif