#include <iostream>
#include <conio.h>
#include "../menu_header/creditos.h"
#include "../menu_header/menu.h"

using namespace std;

// los pibes
void mostrarCreditos() {
    cout << "creditos facheros" << endl;

    cout << endl << "2 - volver";

    int i = 0;

    while (i == 0) {
        char volver = getch();

        if (volver == '2') {
            for (int i = 0; i < 50; ++i) {
                cout << "\n"; // Imprime líneas en blanco para limpiar consola
            }
            mostrarMenu();
            i++;
        }
    }
}
