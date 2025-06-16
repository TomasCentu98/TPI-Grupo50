#include <iostream>
#include <conio.h>
#include "../menu_header/mecanismo_menu.h"
#include "../menu_header/creditos.h"
#include "../menu_header/estadisticas.h"
#include "../menu_header/menu.h"
#include "../juego_header/suma_dados.h"
#include "../juego_header/juego.h"

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
