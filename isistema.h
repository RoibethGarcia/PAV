#ifndef ISISTEMA_H
#define ISISTEMA_H
#include <iostream>
#include "sistema.h"

using namespace std;

class ISistema { //Interfaz
    private:
        ISistema();
    public:
        virtual void listarRepEstand(int)=0;
        virtual void ingresarCi(string)=0;
        virtual void iniciarSesion(string)=0;
        virtual void ingresarContrasenia(string)=0;
        virtual void cancelar()=0;
        virtual void listarReservasActivas()=0;
        virtual void darBajaReserva(string)=0;
        virtual void registroConsulta(string,string)=0;
        virtual void consultaReserva(DtFecha)=0;
        virtual void listarConsultas()=0;
        virtual void elegirConsultas(string)=0;
        virtual void elegirDiagnostico(string)=0;
        ~ISistema();

};

#endif