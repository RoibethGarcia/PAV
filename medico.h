#ifndef MEDICO_H
#define MEDICO_H
#include <iostream>
#include "usuario.h"

using namespace std;

class Medico : public Usuario {
    private:
    public:
        Medico();
        ~Medico();
};

#endif