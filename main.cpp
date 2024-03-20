#include "./includes/informacion.h"
#include "./includes/paginaweb.h"
#include "./includes/DTFecha.h"
#include "./includes/chatGPT.h"
#include "./includes/libro.h"
#include "./includes/estudiante.h"
#include "./includes/DTInfoEstudiante.h"
#include <iostream>

using namespace std;

int main()
{
    
    // Parte A-C
    vector<Informacion*> vector_info;

    PaginaWeb* Info1 = new PaginaWeb("Programación 4 Guía Semana 1 (4/3)", "https://eva.fing.edu.uy/pluginfile.php/468051/mod_resource/content/4/Guia01_P42024_IntroCBasicos.pdf", "El objetivo de esta semana es contextualizar el paradigma de Orientación a Objetos (OO) en el marco de la Ingeniería de Software, así como comenzar a ver sus conceptos básicos y cómo éstos se implementan en C++.");
    DTFecha fecha;
    fecha.setanio(2024);
    fecha.setmes(3);
    fecha.setdia(7);               
    Info1->setfecha(fecha);
    Info1->setId(1);
    vector_info.push_back(Info1);
    
    PaginaWeb* Info2=new PaginaWeb( "Programación orientada a objetos", "https://es.wikipedia.org/wiki/Programaci%C3%B3n_orientada_a_objetos", "La programación orientada a objetos (POO, en español) es un paradigma de programación que parte del concepto de \"objetos\" como base, los cuales contienen información en forma de campos (a veces también referidos como atributos o propiedades) y código en forma de métodos. Algunas características clave de la programación orientada a objetos son herencia, cohesión, abstracción, polimorfismo, acoplamiento y encapsulamiento.");
    DTFecha fecha2;
    fecha2.setanio(2024);
    fecha2.setmes(3);
    fecha2.setdia(5);                   
    Info2->setfecha(fecha2);
    Info2->setId(2);
    vector_info.push_back(Info2);

    chatGPT* Info3=new chatGPT("¿Qué es el polimorfismo en orientación a objetos?", "El polimorfismo en programación orientada a objetos se refiere a la capacidad de un objeto de tomar múltiples formas. Puede ser estático, resuelto en tiempo de compilación, basado en la herencia, o dinámico, resuelto en tiempo de ejecución, asociado a interfaces o métodos abstractos. En esencia, permite que objetos de diferentes clases respondan a la misma interfaz de manera coherente, facilitando la flexibilidad y extensibilidad del código.");
    DTFecha fecha3;
    fecha3.setanio(2024);
    fecha3.setmes(3);
    fecha3.setdia(8);                   
    Info3->setfecha(fecha3);
    Info3->setId(3);
    vector_info.push_back(Info3);

    chatGPT* Info4=new chatGPT("¿Qué es el acoplamiento en orientación a objetos?", "El acoplamiento en programación orientada a objetos se refiere al grado de dependencia entre las clases o módulos de un sistema. Un bajo acoplamiento es deseable, ya que implica que las clases son independientes entre sí, lo que facilita la modificación, mantenimiento y reutilización del código. Por otro lado, un alto acoplamiento indica una fuerte interdependencia entre las clases, lo que puede hacer que el sistema sea más difícil de entender, modificar y mantener.");
    DTFecha fecha4;
    fecha4.setanio(2024);
    fecha4.setmes(3);
    fecha4.setdia(5);                   
    Info4->setfecha(fecha4);
    Info4->setId(4);
    vector_info.push_back(Info4);

    vector<string> autores = {"Craig Larman"}; 
    Libro* Info5=new Libro("Applying UML and Patterns: An Introduction to Object-Oriented Analysis and Design and Iterative Development", autores, "Applying UML and Patterns is the world’s #1 business and college introduction to “thinking in objects”―and using that insight in real-world object-oriented analysis and design. Building on two widely acclaimed previous editions, Craig Larman has updated this book to fully reflect the new UML 2 standard, to help you master the art of object design, and to promote high-impact, iterative, and skillful agile modeling practices.");
    
    DTFecha fecha6;
    fecha6.setanio(2024);
    fecha6.setmes(3);
    fecha6.setdia(15);                   
    Info5->setfecha(fecha6);
    Info5->setId(5);
    vector_info.push_back(Info5);
    
    // Parte D 
    cout << Info1->toString()<< "\n";
    cout << Info2->toString()<< "\n";
    cout << Info3->toString()<< "\n";
    cout << Info4->toString()<< "\n";
    cout << Info5->toString()<< "\n";

    // Parte E
    vector<Estudiante*> vector_est;
    Estudiante* est1 = new Estudiante("Alex García", 52365899, "ag5678@gmail.com");
    vector_est.push_back(est1);
    Estudiante* est2 = new Estudiante("Betina Gonzalez", 49891239, "beg999@gmail.com");
    vector_est.push_back(est2);  //asegurarse de que este bien!!

    // PARTE F
    est1->setguardado(Info1); Info1->setguardado(est1);
    est1->setguardado(Info2); Info2->setguardado(est1);
    est1->setguardado(Info3); Info3->setguardado(est1);
    est2->setguardado(Info3); Info3->setguardado(est2);
    est2->setguardado(Info4); Info4->setguardado(est2);
    est2->setguardado(Info5); Info5->setguardado(est2);
    
    // PARGE G
    
}
