#ifndef CHATGPT
#define CHATGPT
#include "informacion.h"

class chatGPT : public Informacion {
    private:
        string pregunta;
        string respuesta;
    public: 
        chatGPT();
        chatGPT(string, string);
        string toString();
        string getpregunta();
        void setpregunta(string);
        string getrespuesta();
        void setrespuesta(string);
        ~chatGPT();
};
#endif //CHATGPT