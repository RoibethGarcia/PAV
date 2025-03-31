#ifndef DTFECHA_H
#define DTFECHA_H
#include <iostream>

using namespace std;

class DtFecha {
    private:
        int dia;
        int mes;
        int anio;
    public:
        DtFecha();
        DtFecha(int, int, int);
        ~DtFecha();
        void setDia(int);
        void setMes(int);
        void setAnio(int);
        int getDia();
        int getMes();
        int getAnio();
        void imprimirFecha();
};

#endif