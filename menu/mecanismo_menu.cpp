#include <iostream>
#include <conio.h>
#include "../menu_header/mecanismo_menu.h"
#include "../menu_header/creditos.h"
#include "../menu_header/estadisticas.h"
#include "../menu_header/salir.h"
#include "../menu_header/menu.h"
#include "../juego_header/suma_dados.h"
#include "../juego_header/juego.h"

void mecanismoMenu() {

    char decision = getch();

    switch (decision) {
    case '1':
        jugar();
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

// Imprime líneas en blanco para limpiar consola
void espaciosBlancos() {

    for (int i = 0; i < 50; ++i) {
        std::cout << "\n";
    }
}

// boton de volver, si se elige 2 se vuelve al
// menu de inicio
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
