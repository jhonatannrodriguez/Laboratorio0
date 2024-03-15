#include "estudiante.h"
#include "DTFecha.h"
#include <iostream>
#include <vector>
#include<string>

class Informacion {
    private:
        int Identificador;
        DTFecha Fecha;
        std::vector<Estudiante> guardado_por;
    public:
        virtual std::string toString()=0;
        int getId();
        void setId(int);
        DTFecha getfecha();
        void setfecha(DTFecha);
};

