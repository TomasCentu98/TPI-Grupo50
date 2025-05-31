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

    // contador para la suma y dados usados
    int sumaTotal = 0;
    int sumaDadosUsados = 0;

    int largoDeLista = sizeof(lista) / sizeof(lista[0]);

    vector<int> dadosUsados = {};

    // se pueden elegir tantos dados como se quiera hasta llegar
    // al numero de meta
    while (largoDeLista > 0) {

        espaciosBlancos();
        mostrarDadosTirados(lista);

        // va mostrando en pantalla los dados elegidos a sumar
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

            sumaTotal += lista[pos - 1];

            dadosUsados.push_back(lista[pos - 1]);
            sumaDadosUsados++;

            // va borrando las posiciones usadas
            // y verifica si estan repetidos los numeros
            if (estaRepetido(lista, lista[pos - 1])) {
                int num = lista[pos - 1];
                lista.erase(
                        remove(lista.begin(), lista.end(),
                        lista[pos-1]), lista.end()
                    );
                lista.push_back(num);
                largoDeLista--;
            } else {
                lista.erase(
                    remove(lista.begin(), lista.end(),
                    lista[pos-1]), lista.end()
                );
                largoDeLista--;
            }

        } else {continue;}

    };

    // devuelve la cantidad de dados usados y la suma lograda
    vector<int> retorno = {sumaDadosUsados, sumaTotal};

    return retorno;
}


// funcion solo estetica que muestra los dados para sumar
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

// verifica si un numero esta repetido en una lista
bool estaRepetido(vector<int> lista, int mumero) {

    int contador = 0;

    for (int i : lista) {
        if (i == mumero) {
            contador++;
        }
        if (contador > 1) {
            return true;
        }
    }
    return false;
}
