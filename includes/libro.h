#include "informacion.h"

class Libro : public Informacion {
    private:
        string titulo;
        vector<string> autores;
        string resumen;
    public: 
        Libro();
        Libro(string, vector<string>, string);
        string toString();
        string gettitulo();
        void settitulo(string);
        vector<string> getautores();
        void setautores (vector<string>);
        string getresumen();
        void setresumen(string);
        ~Libro();
};