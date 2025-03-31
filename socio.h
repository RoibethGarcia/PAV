#ifndef SOCIO_H
#define SOCIO_H
#include <iostream>
#include <string>
#include "usuario.h"

using namespace std;

class Socio : public Usuario {
    private:


    public:
        Socio();
        ~Socio();
        void ListarReservasActivas():set String;
        void DarBajaReserva(string idReserva);
};



#endif