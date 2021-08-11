#include <stdio.h>

int value;

int Questao12() {

    /*
    Construa um programa que leia um número inteiro e imprima o valor lido.
    Faça isso até que o valor lido seja igual a 0. Nesse caso, o laço de
    repetição deve ser interrompido.
     */

    do {

        printf("\nDigite algum numero: ");
        scanf("%d", &value);

        printf("Seu numero eh = %d", value);

    } while (value != 0);

    return 0;
}