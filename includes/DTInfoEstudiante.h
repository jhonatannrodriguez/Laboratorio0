#ifndef DTINFOESTUDIANTE_H
#define DTINFOESTUDIANTE_H
#include <iostream>
#include<string>
using namespace std;

class DTInfoEstudiante {
    private:
        int CI;
        string NombreEst;
        int IdentificadorInfo;
    public:
        DTInfoEstudiante();
        DTInfoEstudiante(int, string, int);
        int getCI();
        void setCI(int);
        string getNombreEst();
        void setNombreEst(string);
        int getIdInfo();
        void setIdInfo(int);
        ~DTInfoEstudiante();
} ;

ostream& operator<<(ostream& os,  DTInfoEstudiante& infoEstudiante);
#endif
