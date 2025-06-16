#include <iostream>
#include <conio.h>
#include "../menu_header/estadisticas.h"
#include "../menu_header/mecanismo_menu.h"

using namespace std;

// solo muestra el texto de estadisticas
void mostarEstadisticas (vector<int>& puntosEstadisticas, vector<string>& nombresEstadisticas) {
    cout << "---- ESTADISTICAS ----" << endl;
    for(int i=0; i<nombresEstadisticas.size(); i++) {
        cout << "# " << nombresEstadisticas[i] << " - " << puntosEstadisticas[i] << "pts" << endl;
    }

    cout << endl << endl << "2 - volver" << endl;

    volver();
}
