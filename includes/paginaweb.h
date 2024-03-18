#include "informacion.h"

class PaginaWeb : public Informacion {
    private:
        string Titulo;
        string Link;
        string Text;
    public:
        PaginaWeb();
        PaginaWeb(string, string, string);
        string toString();
        string gettitulo();
        void settitulo(string);
        string getlink();
        void setlink(string);
        string gettext();
        void settext(string);
        ~PaginaWeb();
};