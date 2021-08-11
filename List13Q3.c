//
// Created by CarlosViniMSouza on 05/08/2021.
//
#include <stdio.h>

int n1;

int Question3() {

    printf("Digite algum numero: ");
    scanf("%d", &n1);

    printf("Antecessor: %d | Sucessor: %d", (n1 - 1), (n1 + 1));

    return 0;
}
