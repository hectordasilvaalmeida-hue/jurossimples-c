#include <stdio.h>

int calcular_juros(int capital, int taxa, int tempo);

int main()
{

    printf("Teste 1: %d (Esperado: 50)\n", calcular_juros(100, 50, 10));

    printf("Teste 2: %d (Esperado: 75)\n", calcular_juros(100, 25, 12));

    printf("Teste 3: %d (Esperado: 375)\n", calcular_juros(100, 75, 5));

    printf("Criado por Hector da Silva Almeida");
    return 0;
}