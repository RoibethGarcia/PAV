#include "usuario.h"
#include "socio.h"
#include "consulta.h"
#include "comun.h"

 void Socio::DarBajaReserva(string idReserva){
    Usuario* u=Usuario.find(cedula);
    set<Usuario*>:: iterator it;
    bool encontre =false;
    for(it=Usuario.begin; it!=Usuario.end and !encontre; it++){
        if((*it)->get cedula()=cedula){
            u= *it;
            encontre =true;
        }
            
    }
    Comun* c=Comun.find(FechaRes);
    set<Comun*>:: iterator it;
    for(it=Comun.begin; it!=Comun.end and !encontre; it++){
       (*it)->erase();
       delete (*it);

    }


 }