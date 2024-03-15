#include "informacion.h"
#include "DTFecha.h"
#include <iostream>
#include<string>

chatGPT::chatGPT(){
    this.pregunta = "";
    this.respuesta = "";
}
chatGPT::chatGPT(std::string pregunta, std::string respuesta){
    this.pregunta = pregunta;
    this.respuesta = respuesta;
}

std::string chatGPT::getpregunta(){
    return this.pregunta;
}
std::string chatGPT::getrespuesta(){
    return this.respuesta;
}
void chatGPT::setpregunta(std::string pregunta){
    this.pregunta = pregunta;
}
void chatGPT::setpregunta(std::string respuesta){
    this.respuesta = respuesta;
}

chatGPT::~chatGPT(){}; 
