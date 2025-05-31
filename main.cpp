#include <iostream>
#include "funciones.h"
#include <ctime>
using namespace std;

int main(){
    srand (time(nullptr));
	int Seleccion;

	cout << "1 - Jugar" << endl;
	cout << "2 - Estadistica" << endl;
	cout << "3 - Creditos" << endl;
	cout << " ------------------" << endl;
	cout << "0 - Salir" << endl;
    cin >> Seleccion;

	switch(Seleccion){
	case 1:
    cout << "la tirada de dados del primer jugador fue: " << tirardado6caras() << endl;

    break;
	case 2:
    break;
	case 3:
    break;
	case 0:
	    break;
	}

holaxdxddddd

	return 0;
}


