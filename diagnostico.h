#ifndef DIAGNOSTICO_H
#define DIAGNOSTICO_H
#include <iostream>

using namespace std;

class Diagnostico {
    private:
        string descripcion;
        string reporte;
    public:
        Diagnostico();
        Diagnostico(string, string);
        ~Diagnostico();
};

#endif