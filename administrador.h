#ifndef MEDICO_H
#define MEDICO_H
#include <iostream>
#include "usuario.h"

using namespace std;

class Administrador : public Usuario {
    private:
    public:
        Administrador();
        ~Administrador();
};

#endif