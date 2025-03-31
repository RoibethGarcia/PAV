#ifndef EMERGENCIA_H
#define EMERGENCIA_H
#include <iostream>
#include "consulta.h"

using namespace std;

class Emergencia : public Consulta {
    private:
        string motivo;
    public: 
        Emergencia();
        Emergencia(string);
        ~Emergencia();
};

#endif