#include "../includes/estudiante.h"

Estudiante::Estudiante() {
    this->Nombre = "";
    this->CI = 0;
    this->Email = "";
}

Estudiante::Estudiante(string Nombre, int CI, string Email) {
    this->Nombre = Nombre;
    this->CI = CI;
    this->Email = Email;
}

string Estudiante::getnombre() {
    return this->Nombre;
}

void Estudiante::setnombre(string Nombre) {
    this->Nombre = Nombre;
}

int Estudiante::getCI() {
    return this->CI;
}

void Estudiante::setCI(int CI) {
    this->CI= CI;
}

void Estudiante::setemail(string Email) {
    this->Email = Email;
}

string Estudiante::getemail() {
    return this->Email;
}

string Estudiante::toString() {
    string res = "Estudiante: ";
    res += getnombre() + ", ";
    res += to_string(getCI()) + ", ";
    res += getemail() + "\n";
    return res;
}

void Estudiante::setguardado(Informacion* Info) {
    this->guardado_por.push_back(Info);
}

vector<Informacion*> Estudiante::getguardado() {
    return this->guardado_por;
}

vector<string> Estudiante::listarInfo(DTFecha Desde) {
    vector<string> res;
    for (unsigned long int i = 0; i < this->guardado_por.size(); i++) {
        if (this->guardado_por[i]->esfechaposterior(Desde)) {
            res.push_back(this->guardado_por[i]->toString());
        }
    }
    return res;
}

Estudiante::~Estudiante(){
    this->getguardado().clear();
    cout << "Objeto Estudiante eliminado!" << endl;
}

