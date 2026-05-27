#include <stdio.h>
#include "function_jurossimples.c"

int calcular_juros(int capital, int taxa, int tempo);

int main(int argc, char *argv[]) {
    int c, i, t, resultado_final;
    
    printf("Digite o capital: ");
    scanf("%d", &c);
    printf("Digite a taxa (em porcentagem inteira, ex: 25): ");
    scanf("%d", &i);
    printf("Digite o tempo: ");
    scanf("%d", &t);
    
    resultado_final = calculo_de_juros(c, i, t);
    printf("O valor dos juros é: %d\n", resultado_final);
    
    printf("Criado por Hector da Silva Almeida");

    return 0; 
}