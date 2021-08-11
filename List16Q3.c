#include <stdio.h>

int Question11() {

    float A, B, C;
    int I;

    printf("Digite um num inteiro: ");
    scanf("%d", &I);

    printf("Digite 3 numeros reais diferentes (ex.: 1.5 11.5 13.05) = ");
    scanf("%f %f %f", &A, &B, &C);

    switch (I) {

        case 1:
            if (A > B && A > C && B > C) {
                printf("%f %f %f", C, B, A);
            } else if (A > B && A > C && C > B) {
                printf("%f %f %f", B, C, A);
            } else if (B > A && B > C && A > C) {
                printf("%f %f %f", C, A, B);
            } else if (B > A && B > C && C > A) {
                printf("%f %f %f", A, C, B);
            } else if (C > A && C > B && A > B) {
                printf("%f %f %f", B, A, C);
            } else if (C > A && C > B && B > A) {
                printf("%f %f %f", A, B, C);
            }
            //
            break;
        case 2:
            if (A > B && A > C && B > C) {
                printf("%f %f %f", A, B, C);
            } else if (A > B && A > C && C > B) {
                printf("%f %f %f", A, C, B);
            } else if (B > A && B > C && A > C) {
                printf("%f %f %f", B, A, C);
            } else if (B > A && B > C && C > A) {
                printf("%f %f %f", B, C, A);
            } else if (C > A && C > B && A > B) {
                printf("%f %f %f", C, A, B);
            } else if (C > A && C > B && B > A) {
                printf("%f %f %f", C, B, A);
            }
            //
            break;
        case 3:
            if (A > B && A > C) {
                printf("%f %f %f", B, A, C);
            } else if (B > A && B > C) {
                printf("%f %f %f", A, B, C);
            } else {
                printf("%f %f %f", A, C, B);
            }
            //
            break;
    }
}