#include "DtTime.h"

DtTime::DtTime() {
    hora=0;
    minutos=0;
}

DtTime::DtTime(int hora, int minutos) {
    this->hora = hora;
    this->minutos = minutos;
}

DtTime::~DtTime() {

}

void DtTime::setHora(int hora) {
    this->hora = hora;
}

void DtTime::setMinutos(int minutos) {
    this->minutos = minutos;
}

int DtTime::getHora() {
    return this->hora;
}

int DtTime::getMinutos() {
    return this->minutos;
}

void DtTime::imprimirHora() {
    cout << hora << ":" << minutos;
}