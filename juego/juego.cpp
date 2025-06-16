#include <iostream>
#include "../juego_header/juego.h"
#include "../juego_header/suma_dados.h"
#include <vector>
#include "../funciones.h"
#include "../juego_header/suma_dados.h"
#include "../menu_header/mecanismo_menu.h"
#include "../menu_header/menu.h"
#include "../menu_header/estadisticas.h"

using namespace std;

// aca va el codigo sobre el juego
// turnos y datos correspondientes
void jugar(vector<int>& puntosEstadisticas, vector<string>& nombresEstadisticas) {

// ********* DATOS DE JUGADORES **********
    string jugador1 = "nombre";
    int dadosJugador1 = 6;
    int tiradasJugador1 = 0;

    string jugador2 = "nombre";
    int dadosJugador2 = 6;
    int tiradasJugador2 = 0;

    jugador1 = pedirnombre();
    jugador2 = pedirnombre();

// ********* FIN DATOS DE JUGADORES **********

    decidirPrimerTurno(jugador1, jugador2);
    vector<int> resultado = {};

    // total de 3 partidas si o si :D
    int contadorPartidas = 0;
    while (contadorPartidas < 3) {

    // turno jugador 1
        resultado = turno(jugador1, dadosJugador1);

        tiradasJugador1 += resultado[2] * resultado[0];

    // turno jugador 2
        dadosJugador2 += resultado[1];
        resultado = turno(jugador2, dadosJugador2);
        tiradasJugador2 += resultado[2] * resultado[0];

        contadorPartidas++;
    };

    // pasa los puntajes finales de cada jugador
    // guarda solo la mas alta en las estadisticas
    // despues se podran ver en el menu -> estadisticas
    vector<int> puntajes = {tiradasJugador1, tiradasJugador2};
    vector<string> nombres = {jugador1, jugador2};

    agregarEstadisticas(puntajes, nombres, puntosEstadisticas, nombresEstadisticas);

    // vuelve al menu de inicio al ternminar la partida
    espaciosBlancos();
    cout << "/// fin del juego ///" << endl;
    cout << endl << "2 - volver a menu" << endl;
    volver();
}

string pedirnombre(){
    espaciosBlancos();
    string nombre;
    cout << "ingrese nombre del jugador " << endl;
    getline(cin, nombre);
    return nombre;
}

void decidirPrimerTurno(string& jugador1, string& jugador2) {

    int dadoJugador1 = 0, dadoJugador2 = 0;

    // para que siga si es que salen dados iguales
    while (dadoJugador1 == dadoJugador2) {

        dadoJugador1 = tirardado6caras();
        dadoJugador2 = tirardado6caras();

        if (dadoJugador2 > dadoJugador1) {
            string guardado = jugador1;
            jugador1 = jugador2;
            jugador2 = guardado;
            break;
        } else break;
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

    int numeroMeta = tirardado12caras(jugador);

    vector<int> dadosStock = tiradaDados(cantDados);

    vector<int> resultado = elegirDadosTirados(dadosStock, numeroMeta, jugador);

    // resultado tendria {sumaDeDadosUsados, dadosSinUsar, sumaTotalHecha}
    return resultado;
}

