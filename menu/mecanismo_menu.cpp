#include <iostream>
#include <conio.h>
#include "../menu_header/mecanismo_menu.h"
#include "../menu_header/creditos.h"
#include "../menu_header/estadisticas.h"
#include "../menu_header/salir.h"

using namespace std;

void mecanismoMenu() {

    // esto detecta la tecla que toquemos sin tener que apretar ENTER
    // lo hace mas didactico al menu je
    char decision = getch();

    switch (decision) {
    case '1':
        cout << "iniciando juego...";
        break;
    case '2':
        mostrarEstadisticas();
        break;
    case '3':
        mostrarCreditos();
        break;
    case '0':
        salir();
        break;
    default:
        mecanismoMenu();
    }

}
