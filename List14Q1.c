#include <stdio.h>

int v1;

int Question5() {

    printf("Digite qualquer numero inteiro: ");
    scanf("%d", &v1);

    printf("O cubo desse numero: %d", v1 * v1 * v1);

    return 0;
}