#include <iostream>
#include "../juego_header/juego.h"
#include "../juego_header/suma_dados.h"
#include <vector>
#include "../funciones.h"
#include "../juego_header/suma_dados.h"
#include "../menu_header/mecanismo_menu.h"

using namespace std;

// aca va el codigo para empezar el juego
void jugar() {

    string jugador1 = "nombre";
    int dadosJugador1 = 6;
    string jugador2 = "nombre";
    int dadosJugador2 = 6;

    jugador1 = pedirnombre();
    jugador2 = pedirnombre();

    decidirPrimerTurno(jugador1, jugador2);
    vector<int> resultado = {};

    resultado = turno(jugador1, dadosJugador1);

    dadosJugador2 += resultado[1];
    resultado = turno(jugador2, dadosJugador2);

    cout << endl << endl << "fin de la prueba";
}

string pedirnombre(){
    espaciosBlancos();
    string nombre;
    cout << "ingrese nombre del jugador " << endl;
    cin >> nombre;
    return nombre;
}

void decidirPrimerTurno(string& jugador1, string& jugador2) {

    int dadoJugador1 = 0, dadoJugador2 = 0;

    // para que siga si es que salen dados iguales
    while (dadoJugador1 == dadoJugador2) {

        int dadoJugador1 = tirardado6caras();
        int dadoJugador2 = tirardado6caras();

        if (dadoJugador2 > dadoJugador1) {
            string guardado = jugador1;
            jugador1 = jugador2;
            jugador2 = guardado;
            break;
        }
    };
}

vector<int> tiradaDados(int cantDados) {

    vector<int> dadosStock = {};

    for (int i=0; i< cantDados; i++) {
        int dado = tirardado6caras();
        dadosStock.push_back(dado);
    }

    return dadosStock;
}

vector<int> turno(string jugador, int cantDados) {

    int numeroMeta = tirardado12caras();

    vector<int> dadosStock = tiradaDados(cantDados);

    vector<int> resultado = elegirDadosTirados(dadosStock, numeroMeta, jugador);

    // resultado tendria {sumaDeDadosUsados, dadosSinUsar, sumaTotalHecha}
    return resultado;
}
