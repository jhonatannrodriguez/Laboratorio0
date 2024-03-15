#include "informacion.h"
#include "DTFecha.h"
#include <iostream>
#include<string>

int Informacion::getId(){
    return this.Identificador;
}
DTFecha Informacion::getfecha(){
    return this.Fecha;
}
void Informacion::setId(int id){
    this.Identificador = id;
}
void Informacion::setfecha(DTFecha fecha){
    this.Fecha = fecha;
}
