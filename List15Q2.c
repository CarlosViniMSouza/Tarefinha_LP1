#include <stdio.h>
#include <math.h>

int a1, a2;

int Question8() {

    printf("Digite um num inteiro: ");
    scanf("%d", &a1);

    printf("Digite outro inteiro: ");
    scanf("%d", &a2);

    if(a1 < a2) {
        printf("Quadrado do menor: %d | Raiz Quadrada do maior: %f", a1*a1, sqrt(a2));
    } else if(a1 > a2) {
        printf("Quadrado do menor: %d | Raiz Quadrada do maior: %f", a2*a2, sqrt(a1));
    } else {
        printf("Ambos os numeros sao iguais!");
    }

    return 0;
}