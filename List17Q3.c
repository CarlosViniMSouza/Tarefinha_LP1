#include <stdio.h>

int num, cont;
float media, soma_num;

int Questao14() {

    printf("Digite alguma idade: ");
    scanf("%d", &num);

    cont = 0;

    while (num != 0) {
        cont += 1;
        soma_num += num;
        media = soma_num/cont;

        printf("Digite alguma idade: ");
        scanf("%d", &num);
    }

    printf("A media de idades foi: %.2f", media);

    return 0;
}