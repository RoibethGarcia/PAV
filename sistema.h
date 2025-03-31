#ifndef SISTEMA_H
#define SISTEMA_H
#include <iostream>
#include <vector>
#include "isistema.h"
#include "usuario.h"

class Sistema : public ISistema {
    private:
        vector<Usuario*> usuarios;
        Sistema();
    public:
        ~Sistema();
        void listarRepEstand(int);
        void ingresarCi(string);
        void iniciarSesion(string);
        void ingresarContrasenia(string);
        void cancelar();
        void listarReservasActivas();
        void darBajaReserva(string);
        void registroConsulta(string,string);
        void consultaReserva(DtFecha);
        void listarConsultas();
        void elegirConsultas(string);
        void elegirDiagnostico(string);

};

#endif