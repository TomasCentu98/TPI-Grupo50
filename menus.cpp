#include <iostream>
#include "menus.h"
#include "conio.h"
#include "jueguito.h"

using namespace std;

// solo muestra texto del menu
void mostrarMenu() {

    cout << " 1 - Jugar" << endl;
	cout << " 2 - Estadistica" << endl;
	cout << " 3 - Creditos" << endl;
	cout << " 4 - Reglas" << endl;
	cout << " ------------------ " << endl;
	cout << " 0 - Salir" << endl;
}

void mostrarCreditos() {

    cout<<"=============================" << endl;
    cout<< "          Creditos           " << endl;
    cout<<"============================="<< endl << endl;

    cout<< "  Materia: Progamacion 1"<<endl;
    cout<< "  Profesor: Angel Simon"<< endl << endl;

    cout<< "  Integrantes de 'Los Pibes'"<<endl;
    cout<< "  1. Tomas Centurion     - 30926"<<endl;
    cout<< "  2. Franco Medero       - 27589"<< endl;
    cout<< "  3. Sebastian Gomez     - 28781"<< endl;
    cout<< "  4. Angel Diaz          - 33472"<< endl;


    cout << endl << endl << "2 - volver" << endl;

    volver();
}

// solo muestra el texto de estadisticas
void mostarEstadisticas (vector<int>& puntosEstadisticas, vector<string>& nombresEstadisticas) {
    cout << "---- ESTADISTICAS ----" << endl;
    for(int i=0; i<nombresEstadisticas.size(); i++) {
        cout << "# " << nombresEstadisticas[i] << " - " << puntosEstadisticas[i] << "pts" << endl;
    }

    cout << endl << endl << "2 - volver" << endl;

    volver();
}

void mostrarReglas() {

    cout << "agregar las reglas masomenos" << endl;

    cout << endl << "2 - volver";

    volver();
}

// es el mecanismo no toquen nada jeje
void mecanismoMenu() {

    vector<int> puntosEstadisticas = {500, 50, 50, 10};
    vector<string> nombresEstadisticas = {"Tomas Centurion", "Franco Medero", "Sebastian Gomez", "Angel Diaz"};

    // condicion para el while del menu
    // se va a ejecutar todo el programa hasta que salgas
    bool condicion = true;

    while (condicion) {
        char decision = getch();

        switch (decision) {
        case '1':
            jugar(puntosEstadisticas, nombresEstadisticas);
            break;
        case '2':
            espaciosBlancos();
            mostarEstadisticas(puntosEstadisticas, nombresEstadisticas);
            break;
        case '3':
            espaciosBlancos();
            mostrarCreditos();
            break;
        case '4':
            espaciosBlancos();
            mostrarReglas();
            break;
        case '0':
            condicion = false;
            break;
        default:
            break;
        }
    }

}

// Imprime líneas en blanco para "limpiar consola"
void espaciosBlancos() {

    for (int i = 0; i < 50; ++i) {
        std::cout << "\n";
    }

}

// boton de volver, si se elige 2 se vuelve al
// menu de inicio, sino sigue esperando que lo elijas :c
// se hizo para no repetir codigo ehje
void volver() {

    int i = 0;

    while (i == 0) {
        int volver = getch();

        if (volver == '2') {
            espaciosBlancos();
            mostrarMenu();
            i++;
        }
    }
}
