#pragma once
#include <iostream>
#include <vector>

using namespace std;

void jugar();

string pedirnombre();

void decidirPrimerTurno(string& jugador1, string& jugador2);

vector<int> tiradaDados(int cantDados);

vector<int> turno(string jugador, int cantDados);
