#include "../includes/DTFecha.h"
#include <string>

DTFecha::DTFecha() {
    this->dia = 0;
    this->mes = 0;
    this->anio = 0;
}
DTFecha::DTFecha(int dia, int mes, int anio) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

int DTFecha::getdia(){
    return this->dia;
}
int DTFecha::getmes(){
    return this->mes;
}
int DTFecha::getanio(){
    return this->anio;
}
DTFecha::~DTFecha() {};