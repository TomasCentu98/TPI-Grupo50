#include <iostream>
#include "menus.h"
#include <ctime>

using namespace std;

int main(){
    srand (time(nullptr));

	mostrarMenu(); // solo texto
	mecanismoMenu(); // llama al mecanismo del menu

	return 0;
}
