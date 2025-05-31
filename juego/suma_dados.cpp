#include <iostream>
#include "../juego_header/suma_dados.h"
#include <conio.h>
#include <vector>
#include "../menu_header/mecanismo_menu.h"
#include <algorithm>

using namespace std;

// se pasa a la funcion la cantidad de numeros en un
// vector y tambien el numero meta
vector<int> elegirDadosTirados(vector<int> lista, int numeroMeta) {

    // contador para la suma
    int sumaTotal = 0;
    int sumaDadosUsados = 0;
    int largoDeLista = sizeof(lista) / sizeof(lista[0]);

    vector<int> dadosElegidos = lista;
    vector<int> dadosUsados = {};

    // se pueden elegir tantos dados como se quiera hasta llegar
    // al numero de meta
    do {

        espaciosBlancos();
        mostrarDadosTirados(dadosElegidos);

        for (int i : dadosUsados) {
            cout << i << " ";
        }

        // cuando llegue a la suma meta, termina el ciclo
        if (sumaTotal >= numeroMeta) {
            cout << " = " << sumaTotal;
            break;
        }

        // elegis la posicion que quieras sumar
        char posicion = getch();
        int pos = stoi(string(1, posicion));

        if (pos > 0 && pos <= largoDeLista) {

            sumaTotal += dadosElegidos[pos - 1];
            dadosUsados.push_back(dadosElegidos[pos - 1]);
            sumaDadosUsados++;

            // va borrando las posiciones usadas
            dadosElegidos.erase(
                std::remove(dadosElegidos.begin(), dadosElegidos.end(), dadosElegidos[pos-1]), dadosElegidos.end()
                );
            dadosElegidos.resize(largoDeLista - 1);
            largoDeLista--;
        } else {continue;}

    } while (largoDeLista > 0);

    vector<int> retorno = {sumaDadosUsados, sumaTotal};

    return retorno;
}


void mostrarDadosTirados(vector<int> lista) {

    cout << "           DADOS TIRADOS:      " << endl;
    cout << "** presionar solo posicion del numero a elegir **" << endl;
    cout << endl;
    for (int i : lista) {
        cout << i << " ";
    }
    cout << endl;
    cout << "*************************";
    cout << endl;
}
