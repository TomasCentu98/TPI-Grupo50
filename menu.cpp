#include <iostream>
#include "menu.h"
#include <conio.h>


using namespace std;

// solo muestra texto del menu
void mostrarMenu() {

    cout << " 1 - Jugar" << endl;
	cout << " 2 - Estadistica" << endl;
	cout << " 3 - Creditos" << endl;
	cout << " ------------------ " << endl;
	cout << " 0 - Salir" << endl;

	mecanismoMenu();
}

// aca va el desarrollo para mostrar las estadisticas
void mostrarEstadisticas() {
    cout << "Se muestran las estadisticas guardadas :D";
}

// los pibes
void mostrarCreditos() {

    cout << "creditos facheros";
}

// salir del programa
void salir() {
    terminate();
}

void mecanismoMenu() {

    char decision = getch();

    switch (decision) {
    case 1:
        cout << "iniciando juego...";
        break;
    case 2:
        mostrarEstadisticas();
        break;
    case 3:
        mostrarCreditos();
        break;
    case 0:
        salir();
        break;
    default:
        mecanismoMenu();
    }

}
