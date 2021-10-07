#include <iostream>
#include <fstream>
#include <conio.h>

#include "clista.h"

#include "calumno.h"
#include "cmaestro.h"
#include "cpatrulla.h"
#include "cblindado.h"
#include "ctaxi.h"
#include "cmotor.h"
#include "cllanta.h"


using namespace std;

void opInsertarElemento(cLista& lst);

int main() {

    cLista lst;

    // Creando objetos hardcodeados

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
    lst.insertarAlFinal(maestro1);
    lst.insertarAlFinal(patrulla1);
    lst.insertarAlFinal(blindado1);
    lst.insertarAlFinal(taxi1);
    lst.insertarAlFinal(motor1);
    lst.insertarAlFinal(llanta1);

    lst.insertarAlFinal(alumno2);
    lst.insertarAlFinal(maestro2);
    lst.insertarAlFinal(patrulla2);
    lst.insertarAlFinal(blindado2);
    lst.insertarAlFinal(taxi2);
    lst.insertarAlFinal(motor2);
    lst.insertarAlFinal(llanta2);

    int op;
       do {
           cout << "1. Insertar un elemento en la lista" << endl;
           cout << "2. Imprimir lista" << endl;
           cout << "3. Salvar lista" << endl;
           cout << "4. Cargar lista" << endl;
           cout << "0. Salir" << endl << endl;
           cout << "\tIngresa una opcion: ";

           cin >> op;

           switch (op) {
           case 1: {
               opInsertarElemento(lst);
               break;
           }

           case 2: {
               lst.imprimir();
               getch();
               break;
           }

           case 3: {
               fstream salida("content.txt", ios_base::out);
               lst.Salvar(salida);
               salida.close();
               cout << "\n\tArchivo guardado." << endl;
               cout << "\n\tPresiona <ENTER> para continuar..." << endl;
               getch();
               break;
           }

           case 4: {
               fstream entrada("content.txt", ios_base::in);
               int CLSID = 0;
               entrada >> CLSID;
               lst.Cargar(entrada);
               entrada.close();
               cout << "\n\tArchivo cargado." << endl;
               cout << "\n\tPresiona <ENTER> para continuar..." << endl;
               break;
           }

           case 0: {
               cout << "\n\tFin del Programa." << endl;
               cout << "\tPresiona <ENTER> para continuar..." << endl;
               getch();
               break;
           }

           default: {
               system("CLS");
           }

           }
           system("cls");
       } while(op != 0);

    return 0;
}


void opInsertarElemento(cLista& lst) {
    int op;
    do {
        cout << endl << endl;
        cout << "\tQue tipo de objeto quieres insertar?" << endl;
        cout << "\t\t1. Persona" << endl;
        cout << "\t\t2. Alumno" << endl;
        cout << "\t\t3. Maestro" << endl;
        cout << "\t\t4. Autoparte" << endl;
        cout << "\t\t5. Motor" << endl;
        cout << "\t\t6. Llanta" << endl;
        cout << "\t\t7. Auto" << endl;
        cout << "\t\t8. Patrulla" << endl;
        cout << "\t\t9. Patrulla Blindada" << endl;
        cout << "\t\t10. Taxi" << endl;
        cout << "\t\t0. Salir" << endl << endl;
        cout << "\t\t\tIngresa una opcion: ";

        cin >> op;

        switch (op) {
            //persona
        case 1: {
            string nombre;
            cout << "\n\t\tIngresa el nombre de la persona: ";
            cin >> nombre;

            cPersona* persona = new cPersona(nombre);
            lst.insertarAlFinal(persona);
            break;
        }

            // alumno
        case 2: {
            string nombre;
            int codigo;
            cout << "\n\t\tIngresa el nombre del alumno: ";
            cin >> nombre;
            cout << "\n\t\tIngresa el codigo del alumno: ";
            cin >> codigo;

            cAlumno* alumno = new cAlumno(nombre, codigo);
            lst.insertarAlFinal(alumno);
            break;
        }

            // maestro
        case 3: {
            string nombre;
            int codigo;
            cout << "\n\t\tIngresa el nombre del maestro: ";
            cin >> nombre;
            cout << "\n\t\tIngresa el codigo del maestro: ";
            cin >> codigo;

            cMaestro* maestro = new cMaestro(nombre, codigo);
            lst.insertarAlFinal(maestro);
            break;
        }

            //autoparte
        case 4: {
            int serie;
            cout << "\n\t\tIngresa el numero de serie de la autoparte: ";
            cin >> serie;

            cAutoparte* autoparte = new cAutoparte(serie);
            lst.insertarAlFinal(autoparte);
            break;
        }

            // motor
        case 5: {
            int serie, numCilindros;
            cout << "\n\t\tIngresa el numero de serie del motor: ";
            cin >> serie;
            cout << "\n\t\tIngresa el numero de cilindros del motor: ";
            cin >> numCilindros;

            cMotor* motor = new cMotor(serie, numCilindros);
            lst.insertarAlFinal(motor);
            break;
        }

            // llanta
        case 6: {
            int serie, rodado;
            cout << "\n\t\tIngresa el numero de serie de la llanta: ";
            cin >> serie;
            cout << "\n\t\tIngresa el rodado de la llanta: ";
            cin >> rodado;

            cLlanta* llanta = new cLlanta(serie, rodado);
            lst.insertarAlFinal(llanta);
            break;
        }

            //auto
        case 7: {
            int serie, numCilindros, modelo;
            cout << "\n\t\tIngresa el numero de serie del motor: ";
            cin >> serie;
            cout << "\n\t\tIngresa el numero de cilindros del motor: ";
            cin >> numCilindros;
            cout << "\n\t\tIngresa el modelo del auto: ";
            cin >> modelo;

            cAuto* carro = new cAuto(serie, numCilindros, modelo);
            lst.insertarAlFinal(carro);
            break;
        }

            //patrulla
        case 8: {
            int serie, numCilindros, modelo, opSirena;
            bool sirena;
            cout << "\n\t\tIngresa el numero de serie del motor: ";
            cin >> serie;
            cout << "\n\t\tIngresa el numero de cilindros del motor: ";
            cin >> numCilindros;
            cout << "\n\t\tIngresa el modelo de la patrulla: ";
            cin >> modelo;

            cout << "\n\t\t\t1. Sirena encendida";
            cout << "\n\t\t\t2. Sirena apagada";
            cout << "\n\t\t\tIngresa una opcion: ";
            cin >> opSirena;

            sirena = (opSirena == 1) ? true : false;

            cPatrulla* patrulla = new cPatrulla(serie, numCilindros, modelo, sirena);
            lst.insertarAlFinal(patrulla);
            break;
        }

            //patrulla blindada
        case 9: {
            int serie, numCilindros, modelo, blindaje, opSirena;
            bool sirena;
            cout << "\n\t\tIngresa el numero de serie del motor: ";
            cin >> serie;
            cout << "\n\t\tIngresa el numero de cilindros del motor: ";
            cin >> numCilindros;
            cout << "\n\t\tIngresa el modelo de la patrulla blindada: ";
            cin >> modelo;

            cout << "\n\t\tIngresa el nivel de blindaje: ";
            cin >> blindaje;

            cout << "\n\t\t\t1. Sirena encendida";
            cout << "\n\t\t\t2. Sirena apagada";
            cout << "\n\t\t\tIngresa una opcion: ";
            cin >> opSirena;

            sirena = (opSirena == 1) ? true : false;

            cBlindado* pBlindado = new cBlindado(serie, numCilindros, modelo, sirena, blindaje);
            lst.insertarAlFinal(pBlindado);
            break;
        }

            //taxi
        case 10: {
            int serie, numCilindros, modelo, sitio;
            cout << "\n\t\tIngresa el numero de serie del motor: ";
            cin >> serie;
            cout << "\n\t\tIngresa el numero de cilindros del motor: ";
            cin >> numCilindros;
            cout << "\n\t\tIngresa el modelo del taxi: ";
            cin >> modelo;
            cout << "\n\t\tIngresa el sitio del taxi: ";
            cin >> sitio;

            cTaxi* taxi = new cTaxi(serie, numCilindros, modelo, sitio);
            lst.insertarAlFinal(taxi);
            break;
        }

        case 0: {
            cout << "\n\tVolviendo al menu principal." << endl;
            cout << "\tPresiona <ENTER> para continuar..." << endl;
            getch();
            break;
        }

        default: {
            cout << "\n\tOpcion no valida." << endl;
            cout << "\tPresiona <ENTER> para continuar..." << endl;
            getch();
        }

        }
        system("cls");
    } while(op != 0);

}

