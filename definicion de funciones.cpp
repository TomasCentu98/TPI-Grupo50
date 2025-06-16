#include "funciones.h"
#include <iostream>
#include <conio.h>
#include "menu_header/mecanismo_menu.h"

using namespace std;

// tira un numero al azar entre 1 - 6
int tirardado6caras(){

    int numeroRandom = rand() % 6 + 1;

    return numeroRandom;

}

// tira los dados de 12 caras para el numero meta
// muestra el texto con el nombre del jugador que le toca
// y la el resultado de la suma
int tirardado12caras(string nombre){

    espaciosBlancos();

    int dado1, dado2, resultado;

    dado1 = rand() % 12 + 1;
    dado2 = rand() % 12 + 1;

    resultado = dado1 + dado2;

    cout << "Arranca el jugador: " << nombre << endl;

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

// agrega al ganador a Estadisticas, el orden no es de mayor a menor
// solo lo agrega al final de la lista je
void agregarEstadisticas(vector<int> puntajes, vector<string> nombres, vector<int>& puntosEstadisticas, vector<string>& nombresEstadisticas) {
    if (puntajes[0] > puntajes[1]) {
        puntosEstadisticas.push_back(puntajes[0]);
        nombresEstadisticas.push_back(nombres[0]);
    } else {
        puntosEstadisticas.push_back(puntajes[1]);
        nombresEstadisticas.push_back(nombres[1]);
    }
}

