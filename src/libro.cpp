#include "../includes/libro.h"
#include <iostream>

Libro::Libro(){
    this->titulo = "";
    this->autores = {""};
    this->resumen = "";
}
Libro::Libro(string titulo, vector<string> autores , string resumen ){
    this->titulo = titulo;
    this->autores = autores;
    this->resumen = resumen;
}

string Libro::gettitulo(){
    return this->titulo;
}
vector<string> Libro::getautores(){
    return this->autores;
} 
string Libro::getresumen(){
    return this->resumen;
}

void Libro::settitulo(string titulo){
    this->titulo = titulo;
}
 void Libro::setautores(vector<string> autores){
    this->autores = autores;
}
void Libro::setresumen(string resumen){
    this->resumen = resumen;
}

string Libro::toString(){
    DTFecha fecha = getfecha();
    string res = "Libro: " + to_string(getId()) + ", ";
    res += to_string(fecha.getdia()) + "/" + to_string(fecha.getmes()) + "/" + to_string(fecha.getanio()) + ", ";
    res += gettitulo() + ", ";
    for (unsigned long int i = 0; i < getautores().size(); i++) {
        res += getautores()[i] + " ";
    }
    res += ", " + getresumen() + "\n";
    return res;
}

Libro::~Libro() {
    this->getautores().clear();
    cout << "al lobby" << endl;
}
