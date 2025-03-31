#include "usuario.h"

Usuario::Usuario(Estado estado, string contrasenia, string sexo, Categoria categoria, int edad, DtFecha fechaNac, string cedula) {
    this->estado=estado;
    this->contrasenia=contrasenia;
    this->sexo=sexo;
    this->categoria=categoria;
    this->edad=edad;
    this->fechaNac=fechaNac;
    this->cedula=cedula;

}

Usuario::~Usuario() {

}

bool Usuario::passCorrecta(string pass) {
    if(this->contrasenia==pass) {
        return true;
    }
    else {
        return false;
    }

}

string Usuario::getCedula() {
    return this->cedula;
}

bool Usuario::estadoActivo() {
    if (this->estado == activo)
        return true;
    else
        return false;
}

bool Usuario::usuarioExiste(string ci) {
    int c=0;
    for(int i=0; i<usuarios.size(); i++) {
        if(usuarios[i].getCedula()==ci) {
           c++;
        }
    }
    if(c > 0) {
        return true;
    }
    else {
        return false;
    }
}

void Usuario::agregarUsuario(Usuario a) {
    usuarios.push_back(a);
}

void Usuario::iniciarSesion(string user, string passwd){
    if(Usuario::passCorrecta(passwd)){ //passwd correcta
            if(Usuario::estadoActivo()) //usuario activo
                cout << "Bienvenido Admin.";//Dar inicio de sesion
            else //usuario inactivo
                cout << "Usuario inactivo, no se puede realizar el inicio de sesión.";
        }
        else //passwd incorrecta
            cout << "Le erraste";
}
