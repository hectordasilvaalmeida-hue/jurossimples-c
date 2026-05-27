#include <stdio.h>

int calcular_juros(int capital, int taxa, int tempo)
{

    int juros = (capital * taxa * tempo) / 100;
    return juros;
}