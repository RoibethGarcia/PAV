#ifndef TRATAMIENTO_H
#define TRATAMIENTO_H
#include <iostream>

using namespace std;

class Tratamiento {
    private:
        string descripcion;
    public:
        Tratamiento();
        Tratamiento(string);
        ~Tratamiento();
};

#endif