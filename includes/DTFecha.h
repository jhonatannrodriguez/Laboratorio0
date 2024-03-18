using namespace std;

class DTFecha {
    private:
        int dia;
        int mes;
        int anio;
    public:
        DTFecha();
        DTFecha(int, int, int);

        int getdia();
        void setdia(int);
        int getmes();
        void setmes(int);
        int getanio();
        void setanio(int);

        ~DTFecha();
} ;
