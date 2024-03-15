#include "informacion.h"
#include<string>

class chatGPT : public Informacion {
    private:
        std::string pregunta;
        std::string respuesta;
    public: 
        chatGPT();
        chatGPT(std::string, std::string);

        std::string toString();

        std::string getpregunta();
        void setpregunta(std::string);
        std::string getrespuesta();
        void setrespuesta(std::string);

        ~chatGPT();
};