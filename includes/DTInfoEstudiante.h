#include "informacion.h"
#include "estudiante.h"
#include<string>

class DTInfoEstudiante {
    private:
        int CI;
        std::string NombreEst;
        int IdentificadorInfo;
    public:
        DTInfoEstudiante();
        DTInfoEstudiante(int, std::string, int);

        int getCI();
        void setCI(int);
        std::string getNombreEst();
        void setNombreEst(std::string);
        int getIdInfo();
        void setIdInfo(int);

        ~DTInfoEstudiante();
} ;

