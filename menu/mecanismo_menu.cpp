#include <iostream>
#include <conio.h>
#include "../menu_header/mecanismo_menu.h"
#include "../menu_header/creditos.h"
#include "../menu_header/estadisticas.h"
#include "../menu_header/salir.h"
#include "../menu_header/menu.h"

using namespace std;

void mecanismoMenu() {

    // esto detecta la tecla que toquemos sin tener que apretar ENTER
    // lo hace mas didactico al menu je
    char decision = getch();

    switch (decision) {
    case '1':
        espaciosBlancos();
        cout << "iniciando juego...";
        break;
    case '2':
        espaciosBlancos();
        mostrarEstadisticas();
        break;
    case '3':
        espaciosBlancos();
        mostrarCreditos();
        break;
    case '0':
        salir();
        break;
    default:
        mecanismoMenu();
    }

}

void espaciosBlancos() {

    // Imprime líneas en blanco para limpiar consola
    for (int i = 0; i < 50; ++i) {
        cout << "\n";
    }
}

void volver() {

    int i = 0;

    while (i == 0) {
        char volver = getch();

        if (volver == '2') {
            espaciosBlancos();
            mostrarMenu();
            i++;
        }
    }
}
