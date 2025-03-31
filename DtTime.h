#ifndef DTTIME_H
#define DTTIME_H
#include <iostream>

using namespace std;

class DtTime {
    private:
        int hora;
        int minutos;
    public:
        DtTime();
        DtTime(int, int);
        ~DtTime();
        void setHora(int);
        void setMinutos(int);
        int getHora();
        int getMinutos();
        void imprimirHora();
};

#endif