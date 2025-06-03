#include "funciones.h"
#include <iostream>
#include <conio.h>
#include "menu_header/mecanismo_menu.h"

using namespace std;


int tirardado6caras(){

    return rand() % 6 + 1;

}

int tirardado12caras(){

    espaciosBlancos();

    int dado1, dado2, resultado;

    dado1 = rand() % 12 + 1;
    dado2 = rand() % 12 + 1;

    resultado = dado1 + dado2;

    cout << "Numero Objetivo: ";

    cout << dado1 << " + ";
    cout << dado2 << " = ";
    cout << resultado;

    cout << endl << endl;
    cout << "2 - avanzar";

    int botonAvanzar = 0;

    while (botonAvanzar == 0) {
        int boton = getch();

        if (boton == '2') {
            botonAvanzar++;
        } else continue;
    }

    return resultado;

}
