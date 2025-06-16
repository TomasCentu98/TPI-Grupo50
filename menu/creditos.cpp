#include <iostream>
#include <conio.h>
#include "../menu_header/creditos.h"
#include "../menu_header/menu.h"
#include "../menu_header/mecanismo_menu.h"

using namespace std;

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
