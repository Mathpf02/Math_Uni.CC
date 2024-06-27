#include <stdlib.h>
#include <stdio.h>

/*
EXERCÍCIO_4: Pseudocodigos/códigos
 Faça um pseudocódigo que leia os valores 
 A, B e C e mostre o resultado da seguinte expressão: 
*/
int main (void){
    int not_A, not_B, not_C;
        scanf("%d", &not_A);
        scanf("%d", &not_B);
        scanf("%d", &not_C);

            float not_CALC;
            not_CALC = (not_A * not_B) / not_C;
            printf("O resultado do calculo (A*C)/B e: %.2lf", not_CALC);

            return 0;
}