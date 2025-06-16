#pragma once
#include <vector>

std::vector<int> elegirDadosTirados(std::vector<int> dadosStock, int numeroMeta, std::string jugadorActual);

void mostrarDadosTirados(std::vector<int> dadosStock, std::string jugadorActual, int meta);

bool tiradaFallada (std::vector<int> dadosStock, int numeroObjetivo);

bool tiradaExitosa (vector<int> dadosStock, int numeroObjetivo);
