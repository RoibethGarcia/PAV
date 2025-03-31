#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include "estado.h"
#include "categoria.h"
#include "DtFecha.h"

using namespace std;

class Usuario {
    private:
        Estado estado;
        string contrasenia;
        string sexo;
        Categoria categoria;
        int edad;
        DtFecha fechaNac;
        string cedula;
        vector<Usuario> usuarios; //Tal vez se debería cambiar vector por set
    public:
        Usuario(Estado, string, string, Categoria, int, DtFecha, string);
        ~Usuario();
       virtual bool passCorrecta(string);
       virtual bool usuarioExiste(string);
       string getCedula();
       bool estadoActivo();
       virtual void agregarUsuario(Usuario);
       void iniciarSesion(string, string);
};

#endif