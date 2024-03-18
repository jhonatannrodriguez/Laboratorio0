#include "../includes/DTInfoEstudiante.h"

DTInfoEstudiante::DTInfoEstudiante() {
    this->CI = 0;
    this->IdentificadorInfo = 0;
    this->NombreEst = "";
}

int DTInfoEstudiante::getCI() {
    return this->CI;
}

string DTInfoEstudiante::getNombreEst() {
    return this->NombreEst;
}

int DTInfoEstudiante::getIdInfo() {
    return this->IdentificadorInfo;
}

void DTInfoEstudiante::setCI(int CI) {
    this->CI = CI;
}

void DTInfoEstudiante::setNombreEst(string NombreEst) {
    this->NombreEst = NombreEst;
}

void DTInfoEstudiante::setIdInfo(int IdentificadorInfo) {
    this->IdentificadorInfo = IdentificadorInfo;
}

DTInfoEstudiante::~DTInfoEstudiante() {}