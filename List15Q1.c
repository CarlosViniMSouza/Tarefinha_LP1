#include <stdio.h>

int V1, V2;

int Question7() {

    printf("Digite um num inteiro: ");
    scanf("%d", &V1);

    printf("Digite outro inteiro: ");
    scanf("%d", &V2);

    if(V1 > V2) {
        printf("%d eh maior que %d", V1, V2);
    } else if(V1 < V2) {
        printf("%d eh maior que %d", V2, V1);
    } else {
        printf("Ambos os numeros sao iguais!");
    }

    return 0;
}