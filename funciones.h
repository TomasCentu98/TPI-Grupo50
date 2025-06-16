#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>
#include <vector>
using namespace std;


int tirardado6caras();

int tirardado12caras(string nombre);

void ordenarVector (vector<int>& puntosEstadisticas, vector<string>& nombresEstadisticas);

void agregarEstadisticas(vector<int> puntajes, vector<string> nombres, vector<int>& puntosEstadisticas, vector<string>& nombresEstadisticas);
#endif // FUNCIONES_H_INCLUDED
