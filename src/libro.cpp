#include "informacion.h"
#include "libro.h"
#include<iostream>
// #include<set>
#include<string>

Libro::Libro(){

    this.titulo = "";
    // std::set<string> this.autores = ?;
    this.resumen = "";
}
Libro::Libro(std::string titulo, /* std::set<string> autores */, std::string resumen ){
    this.titulo = titulo;
    this.autores = autores;
    this.resumen = resumen;
}

std::string Libro::gettitulo(){
    return this.titulo;
}
/* std::set<string>*/ Libro::getautores(){
    return this.autores;
} 
std::string Libro::getresumen(){
    return this.resumen;
}

void Libro::settitulo(std::string titulo){
    this.titulo = titulo;
}
 void Libro::setautores(/* std::set<string> */ autores){
    this.autores = autores;
}
void Libro::setresumen(std::string resumen){
    this.resumen = resumen;
}

/* std::string Libro::toString(){
    return "Libro: "+std::to_string(getId())+", "+getfecha()+", "+gettitulo()+", "+getautores()+", "+getresumen();

}*/
Libro::~Libro(){};
