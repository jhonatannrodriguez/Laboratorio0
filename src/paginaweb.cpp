#include "../includes/paginaweb.h"

PaginaWeb::PaginaWeb() {
    this->Titulo = "";
    this->Link = "";
    this->Text = "";
}

PaginaWeb::PaginaWeb(string Titulo, string Link, string Text) {
    this->Titulo = Titulo;
    this->Link = Link;
    this->Text = Text;
}

string PaginaWeb::gettitulo() {
    return this->Titulo;
}

void PaginaWeb::settitulo(string Titulo) {
    this->Titulo = Titulo;
}

string PaginaWeb::getlink() {
    return this->Link;
}

void PaginaWeb::setlink(string Link) {
    this->Link = Link;
}

string PaginaWeb::gettext() {
    return this->Text;
}

void PaginaWeb::settext(string Text) {
    this->Text = Text;
}

string PaginaWeb::toString(){
    DTFecha fecha = getfecha();
    string res = "PáginaWeb: " + to_string(getId()) + ", ";
    res += to_string(fecha.getdia()) + "/" + to_string(fecha.getmes()) + "/" + to_string(fecha.getanio()) + ", ";
    res += gettitulo() + ", ";
    res += getlink() + ", ";
    res += gettext() + "\n";
    return res;
}

PaginaWeb::~PaginaWeb() {}