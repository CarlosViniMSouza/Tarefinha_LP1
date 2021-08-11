#include <stdio.h>

float salario;
int codigo;

int Question10() {

    printf("Digite seu cargo(via-codigo): ");
    scanf("%d", &codigo);

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    switch (codigo) {

        case 1:
            salario = salario + (salario*0.5);
            printf("Seu salario sera agora de R$ %.2f", salario);
            break;

        case 2:
            salario = salario + (salario*0.35);
            printf("Seu salario sera agora de R$ %.2f", salario);
            break;

        case 3:
            salario = salario + (salario*0.2);
            printf("Seu salario sera agora de R$ %.2f", salario);
            break;

        case 4:
            salario = salario + (salario*0.1);
            printf("Seu salario sera agora de R$ %.2f", salario);
            break;

        case 5:
            printf("Sem aumento salarial!");
            break;
    }

    return 0;
}