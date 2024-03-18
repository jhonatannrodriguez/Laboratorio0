//#include "informacion.h"
#include "DTFecha.h"
#include <string>
#include <vector>
using namespace std;

class Estudiante {
    private:
        string Nombre;
        int CI;
        string Email;
        //vector<Informacion> guardado_por;
    public: 
        Estudiante();
        Estudiante(string, int, string);
        string getnombre();
        void setnombre(string);
        int getCI();
        void setCI(int);
        string getemail();
        void setemail(string);
        string toString();
        vector<string> listarInfo(DTFecha);
        ~Estudiante();
};