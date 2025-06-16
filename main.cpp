#include <iostream>
#include "funciones.h"
#include <ctime>
#include "menu_header/menu.h"
#include "menu_header/mecanismo_menu.h"

using namespace std;

int main(){
    srand (time(nullptr));

	mostrarMenu(); // solo texto
	mecanismoMenu(); // llama al mecanismo del menu

	return 0;
}
