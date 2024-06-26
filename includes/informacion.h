#ifndef INFORMACION_H
#define INFORMACION_H

#include "estudiante.h"
#include "DTFecha.h"
#include <vector>
#include <string>
using namespace std;

class Estudiante;

class Informacion {
    private:
        int Identificador;
        DTFecha Fecha;
        vector<Estudiante*> guardado_por;
    public:
        virtual string toString()=0;
        Informacion();
        Informacion(int, DTFecha);
        int getId();
        void setId(int);
        DTFecha getfecha();
        vector<Estudiante*> getguardado();
        void setfecha(DTFecha);
        void setguardado(Estudiante*);
        bool esfechaposterior(DTFecha);
        virtual ~Informacion()=0;
};

#endif

