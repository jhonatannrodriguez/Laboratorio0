#include "../includes/informacion.h"
#include <iostream>
#include <string>

Informacion :: Informacion() {
    this->Identificador = 0;
    this->Fecha = DTFecha(0, 0 ,0);
}

Informacion :: Informacion(int id, DTFecha fecha) {
    this->Identificador = id;
    this->Fecha = fecha;
}

int Informacion::getId(){
    return this->Identificador;
}
DTFecha Informacion::getfecha(){
    return this->Fecha;
}
vector<Estudiante*> Informacion::getguardado(){
    return this->guardado_por;
}
void Informacion::setId(int id){
    this->Identificador = id;
}
void Informacion::setfecha(DTFecha fecha){
    this->Fecha = fecha;
}
void Informacion::setguardado(Estudiante* Est) {
    this->guardado_por.push_back(Est);
}

bool Informacion::esfechaposterior(DTFecha fecha) {
    if (getfecha().getanio() > fecha.getanio()) {
        return true;
    } else if (getfecha().getanio() < fecha.getanio()) {
        return false;
    } else if (getfecha().getmes() > fecha.getmes()) {
        return true;
    } else if (getfecha().getmes() < fecha.getmes()) {
        return false;
    } else if (getfecha().getdia() >= fecha.getdia()) {  
        return true;
    } else return false;
}

Informacion::~Informacion() {}