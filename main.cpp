#include <iostream>
#include "DtFecha.h"
#include "usuario.h"
#include <vector>

using namespace std;

int main() {
    //Prueba de la función usuarioExiste. No darle importancia
    int edad=0;
    DtFecha nacimiento(15,12,1996);
    Estado estado;
    estado=activo;
    Categoria catego;
    catego=socio;
    Categoria catAdmin;
    catAdmin = administrativo;
    string user;
    string contrasena;
    int opcion;


    //CREA ADMIN
    Usuario a(estado, "admin", " ", catAdmin, 0, nacimiento, "admin");
    a.agregarUsuario(a);

    cout << "Ingrese nombre de usuario: ";
    cin >> user;
    if(a.usuarioExiste(user)){//existe usuario
        cout << "Ingrese la contraseña: ";//pide passwd
        cin >> contrasena;
        a.iniciarSesion(user,contrasena);
    }
    else{ //no existe usuario
        while(a.usuarioExiste(user) == false){
            cout << "Usuario no encontrado, desea registrarse?\n1) SI  2) NO (reintentar).\nOPCION: ";
            cin >> opcion;
            if(opcion == 1){ //registrarse, pide datos
                cout << "Ingrese una contraseña: ";
                cin >> contrasena;
            }
            else{ //reintentar ingresando usuario nuevamente
                cout << "Ingrese usuario: ";
                cin >> user;
            }
            cout << "Ingrese la contraseña: ";//pide passwd
            cin >> contrasena;
            a.iniciarSesion(user,contrasena);
    }

    }


    
    return 0;
}