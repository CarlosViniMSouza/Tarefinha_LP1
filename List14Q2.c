#include <stdio.h>

float N1, N2;

int Question6() {

    printf("Digite nota1: ");
    scanf("%f", &N1);
    N1 = N1 * 3.5;

    printf("Digite nota2: ");
    scanf("%f", &N2);
    N2 = N2 * 6.5;

    printf("Media (contando os pesos): %.2f", (N1+N2)/10); //Media na escala de 0 a 10 aproximado

    return 0;
}