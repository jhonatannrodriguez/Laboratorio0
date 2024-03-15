#include "informacion.h"
#include<string>

class PaginaWeb : public Informacion {
    private:
        std::string Titulo;
        std::string Link;
        std::string Text;
    public:
        PaginaWeb();
        PaginaWeb(std::string, std::string, std::string);
        std::string toString();

        std::string gettitulo();
        void settitulo(std::string);

        std::string getlink();
        void setlink(std::string);

        std::string gettext();
        void settext(std::string);

        ~PaginaWeb();
};