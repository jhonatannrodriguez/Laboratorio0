#include "informacion.h"
#include<string>
// #include<set>

class Libro : public Informacion {
    private:
        std::string titulo;
        // std::set<string> autores;
        std::string resumen;
    public: 
        Libro();
        Libro(std::string, std::string[], std::string);

        std::string toString();

        std::string gettitulo();
        void settitulo(std::string);
        std::string[] getautores();
        void setautores (std::string[]);
        std::string getresumen();
        void setresumen(std::string);

        ~Libro();
};