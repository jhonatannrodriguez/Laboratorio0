#include "../includes/informacion.h"
#include "../includes/paginaweb.h"
#include "../includes/DTFecha.h"
#include "../includes/chatGPT.h"
#include "../includes/libro.h"
#include "../includes/estudiante.h"
#include "../includes/DTInfoEstudiante.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    // Parte A  (Creamos objetos de la clase PaginaWeb)

    vector<Informacion*> vector_info;

    PaginaWeb* Info1 = new PaginaWeb("Programación 4 Guía Semana 1 (4/3)", "https://eva.fing.edu.uy/pluginfile.php/468051/mod_resource/content/4/Guia01_P42024_IntroCBasicos.pdf", "El objetivo de esta semana es contextualizar el paradigma de Orientación a Objetos (OO) en el marco de la Ingeniería de Software, así como comenzar a ver sus conceptos básicos y cómo éstos se implementan en C++.");
    DTFecha fecha = DTFecha(7, 3, 2024);        
    Info1->setfecha(fecha);
    Info1->setId(1);
    vector_info.push_back(Info1);
    
    PaginaWeb* Info2=new PaginaWeb( "Programación orientada a objetos", "https://es.wikipedia.org/wiki/Programaci%C3%B3n_orientada_a_objetos", "La programación orientada a objetos (POO, en español) es un paradigma de programación que parte del concepto de \"objetos\" como base, los cuales contienen información en forma de campos (a veces también referidos como atributos o propiedades) y código en forma de métodos. Algunas características clave de la programación orientada a objetos son herencia, cohesión, abstracción, polimorfismo, acoplamiento y encapsulamiento.");
    DTFecha fecha2 = DTFecha(5, 3, 2024);                 
    Info2->setfecha(fecha2);
    Info2->setId(2);
    vector_info.push_back(Info2);

    // PARTE B (Creamos los objetos de la clase chatGPT)

    chatGPT* Info3=new chatGPT("¿Qué es el polimorfismo en orientación a objetos?", "El polimorfismo en programación orientada a objetos se refiere a la capacidad de un objeto de tomar múltiples formas. Puede ser estático, resuelto en tiempo de compilación, basado en la herencia, o dinámico, resuelto en tiempo de ejecución, asociado a interfaces o métodos abstractos. En esencia, permite que objetos de diferentes clases respondan a la misma interfaz de manera coherente, facilitando la flexibilidad y extensibilidad del código.");
    DTFecha fecha3 = DTFecha(8, 3, 2024);            
    Info3->setfecha(fecha3);
    Info3->setId(3);
    vector_info.push_back(Info3);

    chatGPT* Info4=new chatGPT("¿Qué es el acoplamiento en orientación a objetos?", "El acoplamiento en programación orientada a objetos se refiere al grado de dependencia entre las clases o módulos de un sistema. Un bajo acoplamiento es deseable, ya que implica que las clases son independientes entre sí, lo que facilita la modificación, mantenimiento y reutilización del código. Por otro lado, un alto acoplamiento indica una fuerte interdependencia entre las clases, lo que puede hacer que el sistema sea más difícil de entender, modificar y mantener.");
    DTFecha fecha4 = DTFecha(5, 3, 2024);           
    Info4->setfecha(fecha4);
    Info4->setId(4);
    vector_info.push_back(Info4);

    // PARTE C (Creamos el objeto de la clase Libro)

    vector<string> autores = {"Craig Larman"}; 
    Libro* Info5=new Libro("Applying UML and Patterns: An Introduction to Object-Oriented Analysis and Design and Iterative Development", autores, "Applying UML and Patterns is the world’s #1 business and college introduction to “thinking in objects”―and using that insight in real-world object-oriented analysis and design. Building on two widely acclaimed previous editions, Craig Larman has updated this book to fully reflect the new UML 2 standard, to help you master the art of object design, and to promote high-impact, iterative, and skillful agile modeling practices.");
    
    DTFecha fecha5 = DTFecha(15, 3, 2024);                  
    Info5->setfecha(fecha5);
    Info5->setId(5);
    vector_info.push_back(Info5);
    
    // Parte D  (Devolvemos la informacion de todos los objetos anteriormente creados)

    cout << Info1->toString()<< "\n";
    cout << Info2->toString()<< "\n";
    cout << Info3->toString()<< "\n";
    cout << Info4->toString()<< "\n";
    cout << Info5->toString()<< "\n";

    // Parte E (Creamos los objetos de clase Estudiante)

    vector<Estudiante*> vector_est;
    Estudiante* est1 = new Estudiante("Alex García", 52365899, "ag5678@gmail.com");
    vector_est.push_back(est1);
    Estudiante* est2 = new Estudiante("Betina Gonzalez", 49891239, "beg999@gmail.com");
    vector_est.push_back(est2); 

    // PARTE F (A través de los pseudoatributos vinculamos Estudiantes e Informaciones en ambas direcciones)

    est1->setguardado(Info1); Info1->setguardado(est1);
    est1->setguardado(Info2); Info2->setguardado(est1);
    est1->setguardado(Info3); Info3->setguardado(est1);
    est2->setguardado(Info3); Info3->setguardado(est2);
    est2->setguardado(Info4); Info4->setguardado(est2);
    est2->setguardado(Info5); Info5->setguardado(est2);
    
    // PARTE G (Devolvemos en pantalla la información posterior a la fecha dada, de cada estudiante)

    cout << "Informacion posterior a la fecha 8/3/2024 estudiante 1:" << "\n";
    DTFecha Fecha = DTFecha(8,3,2024);
    vector<string> Info_estudiante1 = est1->listarInfo(Fecha); 
    for(unsigned long int i = 0; i < Info_estudiante1.size(); i++) {
          cout << Info_estudiante1[i] << "\n";
};

    cout << "Informacion posterior a la fecha 8/3/2024 estudiante 2:" << "\n";
    vector<string> Info_estudiante2 = est2->listarInfo(Fecha); 
    for(unsigned long int i = 0; i < Info_estudiante2.size(); i++) {
          cout << Info_estudiante2[i] << "\n";
};
 
/* PARTE H (Recorremos las informaciones en busca de la palabra "polimorfismo" y devolvemos un vector de 
estudiantes que han guardado esa información) */

// Creo un par de variables para facilitar la lectura del codigo

    string palabra="polimorfismo";
    vector<DTInfoEstudiante> Link_Info_Estudiante;
    vector<Informacion*> vector_info_guardada;

// Busco en el vector de informacion la palabra y guardo las informaciones que contengan la palabra en otro vector

    for (unsigned long int i=0;i<vector_info.size();i++) {
        if (vector_info[i]->toString().find(palabra) != string::npos)
            vector_info_guardada.push_back(vector_info[i]);
    }

// Busco en las informaciones que contenian la palabra los estudiantes que la guardaron y los guardo en Link_Info_Estudiante

    for (unsigned long int i=0;i<vector_info_guardada.size();i++){
        for (unsigned long int j=0;j<vector_info_guardada[i]->getguardado().size();j++) {
            
            // Variable auxiliar para crear el DTInfoEstudiante que luego guardo en Link_Info_Estudiante
             
            DTInfoEstudiante Est_actual = DTInfoEstudiante(
                vector_info_guardada[i]->getguardado()[j]->getCI(),
                vector_info_guardada[i]->getguardado()[j]->getnombre(),
                vector_info_guardada[i]->getId());
            Link_Info_Estudiante.push_back(Est_actual);
        }
    }
  
// Finalmente en Link_Info_Estudiante tengo el vector con los pares <Informacion , Estudiante>

    for (unsigned long int i=0;i<Link_Info_Estudiante.size();i++){
         cout << Link_Info_Estudiante[i] << endl;
    }

// PARTE I (Eliminamos un objeto de clase Información y sus correspondientes relaciones)
// Eliminamos Info5

    for (unsigned long int i = 0; i < vector_info[4]->getguardado().size(); i++) {
        cout << to_string(i) << endl;
        for (unsigned long int j = 0; j < vector_info[4]->getguardado()[i]->getguardado().size(); j++) {
            cout << to_string(j) << endl;
            if (vector_info[4]->getguardado()[i]->getguardado()[j] == vector_info[4]) {
                vector_info[4]->getguardado()[i]->getguardado().erase(vector_info.begin()+j);
                break;
            }
        }
        cout << "hola" << endl;
    }
    cout << "hola2" << endl;
    vector_info[4]->getguardado().clear();
    delete vector_info[4];
    vector_info.erase(vector_info.begin()+4);
    
    /*palabra="Libro";
    vector<DTInfoEstudiante> Link_Info_Estudiante2;
    vector<Informacion*> vector_info_guardada2;

// Busco en el vector de informacion la palabra y guardo las informaciones que contengan la palabra en otro vector

    for (unsigned long int i=0;i<vector_info.size();i++) {
        if (vector_info[i]->toString().find(palabra) != string::npos)
            vector_info_guardada2.push_back(vector_info[i]);
    }
    
    for (unsigned long int i=0;i<vector_info_guardada2.size();i++){
        for (unsigned long int j=0;j<vector_info_guardada2[i]->getguardado().size();j++) {
            
            // Variable auxiliar para crear el DTInfoEstudiante que luego guardo en Link_Info_Estudiante
             
            DTInfoEstudiante Est_actual2 = DTInfoEstudiante(
                vector_info_guardada2[i]->getguardado()[j]->getCI(),
                vector_info_guardada2[i]->getguardado()[j]->getnombre(),
                vector_info_guardada2[i]->getId());
            Link_Info_Estudiante2.push_back(Est_actual2);
        }
    }

    for (unsigned long int i=0;i<Link_Info_Estudiante2.size();i++){
         cout << Link_Info_Estudiante2[i] << endl;
    }*/
}
