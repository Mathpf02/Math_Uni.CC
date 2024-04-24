#include <stdio.h>
#include <stdlib.h>

/*
EXERCÍCIO_2: Pseudocodigos/códigos
Leia um nº e exiba seu sucessor.
*/
int main(void)
{
    double Num_or, Num_at;
    scanf("%lf", &Num_or);
        Num_at = Num_or + 1;
        /*Descobrir como colocar um laço de retição para descobrir o antecessor
        de numéros com dízimas períodicas.
        */
        printf("O sucessor do numero %.1lf e %.1lf ", Num_or, Num_at);
        return 0;
    }
