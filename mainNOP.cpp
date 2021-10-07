#include <iostream>
#include <fstream>

#include "clista.h"

#include "calumno.h"
#include "cmaestro.h"
#include "cpatrulla.h"
#include "cblindado.h"
#include "ctaxi.h"
#include "cmotor.h"
#include "cllanta.h"


using namespace std;

int main()
{
    cLista lst, L2;

    // Creando objetos a insertar

    cAlumno* alumno1 = new cAlumno("Ismael", 971239471);
    cAlumno* alumno2 = new cAlumno("Guadalupe", 187391);

    cMaestro* maestro1 = new cMaestro("Carlos", 2314132);
    cMaestro* maestro2 = new cMaestro("Dario", 666);

    cPatrulla* patrulla1 = new cPatrulla(7198223, 8, 2009, true);
    cPatrulla* patrulla2 = new cPatrulla(8124614, 6, 2020, false);

    cBlindado* blindado1 = new cBlindado(908742, 8, 2019, false, 500);
    cBlindado* blindado2 = new cBlindado(561248, 8, 2021, true, 900);

    cTaxi* taxi1 = new cTaxi(7818248, 4, 2005, 303);
    cTaxi* taxi2 = new cTaxi(4301358, 3, 2019, 29);

    cMotor* motor1 = new cMotor(68309135, 6);
    cMotor* motor2 = new cMotor(12780924, 10);

    cLlanta* llanta1 = new cLlanta(89076482, 26);
    cLlanta* llanta2 = new cLlanta(90124502, 24);

    lst.insertarAlFinal(alumno1);
    lst.insertarAlFinal(alumno2);
    lst.insertarAlFinal(maestro1);
    lst.insertarAlFinal(maestro2);
    lst.insertarAlFinal(patrulla1);
    lst.insertarAlFinal(patrulla2);
    lst.insertarAlFinal(blindado1);
    lst.insertarAlFinal(blindado2);
    lst.insertarAlFinal(taxi1);
    lst.insertarAlFinal(taxi2);
    lst.insertarAlFinal(motor1);
    lst.insertarAlFinal(motor2);
    lst.insertarAlFinal(llanta1);
    lst.insertarAlFinal(llanta2);


    //lst.imprimir();

    //Salvando contenido de la lista
    fstream salida("content.txt", ios_base::out);
    lst.Salvar(salida);
    salida.close();

    //Cargando archivo en otra lista
    fstream entrada("content.txt", ios_base::in);
    int CLSID = 0;
    entrada >> CLSID;

    L2.Cargar(entrada);
    entrada.close();


    cout << "imprimiendo lista L2" << endl << endl;
    L2.imprimir();

    delete alumno1;
    delete alumno2;

    delete maestro1;
    delete maestro2;

    delete patrulla1;
    delete patrulla2;

    delete blindado1;
    delete blindado2;

    delete taxi1;
    delete taxi2;

    delete motor1;
    delete motor2;

    delete llanta1;
    delete llanta2;

    return 0;
}
