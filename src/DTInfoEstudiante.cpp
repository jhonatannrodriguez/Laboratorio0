#include "../includes/DTInfoEstudiante.h"

DTInfoEstudiante::DTInfoEstudiante() {
    this->CI = 0;
    this->IdentificadorInfo = 0;
    this->NombreEst = "";
}

DTInfoEstudiante::DTInfoEstudiante(int CI, string NombreEst, int IdentificadorInfo)
{
    this->CI = CI;
    this->IdentificadorInfo = IdentificadorInfo;
    this->NombreEst = NombreEst;
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

ostream& operator<<(ostream& os,  DTInfoEstudiante& infoEstudiante) {
    os << infoEstudiante.getCI() << ", " << infoEstudiante.getNombreEst() << ", " << infoEstudiante.getIdInfo();

    return os;
}

DTInfoEstudiante::~DTInfoEstudiante() {}