//
// Created by CarlosViniMSouza on 05/08/2021.
//
#include <stdio.h>

float salario, ganhoPessoal;

int Question1() {

    printf("Digite o valor do salario-minimo: ");
    scanf("%f", &salario);

    printf("Digite o valor do seu ganho mensal: ");
    scanf("%f", &ganhoPessoal);

    printf("Voce ganha %.2f salarios", ganhoPessoal/salario);
    return 0;
}
