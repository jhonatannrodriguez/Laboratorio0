#include "../includes/chatGPT.h"
#include <iostream>
#include <string>

chatGPT::chatGPT(){
    this->pregunta = "";
    this->respuesta = "";
}
chatGPT::chatGPT(string pregunta, string respuesta){
    this->pregunta = pregunta;
    this->respuesta = respuesta;
}

string chatGPT::getpregunta(){
    return this->pregunta;
}
string chatGPT::getrespuesta(){
    return this->respuesta;
}
void chatGPT::setpregunta(string pregunta){
    this->pregunta = pregunta;
}
void chatGPT::setrespuesta(string respuesta){
    this->respuesta = respuesta;
}

string chatGPT::toString(){
    DTFecha fecha = getfecha();
    string res = "chatGPT: " + to_string(getId()) + ", ";
    res += to_string(fecha.getdia()) + "/" + to_string(fecha.getmes()) + "/" + to_string(fecha.getanio()) + ", ";
    res += getpregunta() + ", ";
    res += getrespuesta() + "\n";
    return res;
}

chatGPT::~chatGPT() {
    this->getguardado().clear();
    cout << "Objeto Información eliminado!" << endl;
}; 
