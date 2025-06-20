#pragma once

#include <iostream>
#include <vector>

using namespace std;

void jugar(vector<int>& puntosEstadisticas, vector<string>& nombresEstadisticas);

string pedirnombre();

void decidirPrimerTurno(string& jugador1, string& jugador2);

vector<int> tiradaDados(int cantDados);

vector<int> turno(string jugador, int cantDados, int& totalPuntaje);

vector<int> elegirDadosTirados(vector<int> dadosStock, int numeroObjetivo, string jugadorActual, int& totalPuntaje);

void mostrarDadosTirados(vector<int> dadosStock, string nombre, int numeroObjetivo, int sumaTotal);

bool tiradaFallada (vector<int> dadosStock, int numeroObjetivo);

bool tiradaExitosa (vector<int> dadosStock, int numeroObjetivo);

int tirardado6caras();

int tirardado12caras(string nombre);

void ordenarVector (vector<int>& puntosEstadisticas, vector<string>& nombresEstadisticas);

void agregarEstadisticas(vector<int> puntajes, vector<string> nombres, vector<int>& puntosEstadisticas, vector<string>& nombresEstadisticas);
