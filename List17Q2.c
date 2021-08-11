#include <stdio.h>

int i, j;
int soma = 0;

int Questao13() {

    /*
    Faça um algoritmo que leia 100 números inteiros. Calcule e imprima a soma dos
    números pares e a soma dos números ímpares.
     */

    for(i = 0; i < 100; i++) {
        i = i + 1;
        soma += i; //soma dos impares
    }
    printf("\n soma dos impares: %d", soma);

    soma = 0;

    for(j = 1; j < 100; j++) {
        j = j + 1;
        soma += j; //soma dos pares
    }
    printf("\n soma dos pares: %d", soma);

    return 0;
}