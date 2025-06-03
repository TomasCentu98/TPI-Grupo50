#include <iostream>
#include "../juego_header/suma_dados.h"
#include <conio.h>
#include <vector>
#include "../menu_header/mecanismo_menu.h"

using namespace std;

// se pasa a la funcion la cantidad de numeros en un
// vector y tambien el numero meta
vector<int> elegirDadosTirados(vector<int> dadosStock, int numeroObjetivo, string jugadorActual) {

    // contador para la suma y dados usados
    int sumaTotal = 0;
    int sumaDadosUsados = 0;

    int largoDeLista = dadosStock.size();

    // verifica si es posible llegar a la meta
    // con los dados actuales
    int totalDados = 0;
    for (int i : dadosStock) {
        totalDados += i;
    }

    if (totalDados < numeroObjetivo) {
        cout << "Mala suerte wachin";
        vector<int> retorno = {sumaDadosUsados, dadosStock.size(), sumaTotal};
        return retorno;
    };

    vector<int> dadosUsados = {};

    // se pueden elegir tantos dados como se quiera hasta llegar
    // al numero de meta
    while (largoDeLista > 0) {

        espaciosBlancos();
        mostrarDadosTirados(dadosStock, jugadorActual, numeroObjetivo);

        // va mostrando en pantalla los dados elegidos a sumar
        for (int i : dadosUsados) {
            cout << i << " ";
        }

        // cuando llegue a la suma meta, termina el ciclo
        if (sumaTotal >= numeroObjetivo) {
            cout << " = " << sumaTotal;
            break;
        }

        // elegis la posicion que quieras sumar
        char posicion = getch();
        int pos = stoi(string(1, posicion));

        // los botones tiene que ser menor o igual
        // al la cantidad de valores visibles
        if (pos > 0 && pos <= largoDeLista) {

            sumaTotal += dadosStock[pos - 1];

            dadosUsados.push_back(dadosStock[pos - 1]);
            sumaDadosUsados++;

            // va borrando los dados usados
            dadosStock.erase(dadosStock.begin() + (pos - 1));
            largoDeLista--;

        } else {continue;}

    };

    // devuelve la cantidad de dados usados y la suma lograda
    vector<int> retorno = {sumaDadosUsados, dadosStock.size(), sumaTotal};

    return retorno;
}


// funcion solo estetica que muestra los dados para sumar
// el nombre del turno actual y la meta a alcanzar
void mostrarDadosTirados(vector<int> dadosStock, string nombre, int numeroObjetivo) {

    cout << "Turno: " << nombre;
    cout << "        DADOS TIRADOS       ";
    cout << "meta: " << numeroObjetivo << endl;
    cout << "** presionar solo posicion del numero a elegir **" << endl;
    cout << endl;
    for (int i : dadosStock) {
        cout << i << " ";
    }
    cout << endl;
    cout << "*************************";
    cout << endl;
}
