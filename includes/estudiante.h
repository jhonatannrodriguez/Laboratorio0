#include "informacion.h"
#include "datatypes.h"
#include<string>

class Estudiante {
    private:
        std::string Nombre;
        int CI;
        std::string Email;
        std::vector<Informacion> guardado_por;
    public: 
        std::string toString();
        std::string[] listarInfo(DTFecha);
};