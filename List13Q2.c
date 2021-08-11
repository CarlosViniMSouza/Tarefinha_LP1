//
// Created by CarlosViniMSouza on 05/08/2021.
//
#include <stdio.h>

int v1, v2;

int Question2() {

    printf("Digite algum num inteiro: ");
    scanf("%d", &v1);

    printf("Digite algum outro num inteiro: ");
    scanf("%d", &v2);

    printf("Multiplique o resultado da soma pelo primeiro numero: %d", (v1 + v2) * v1);

    return 0;
}
