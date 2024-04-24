#include <stdio.h>
#include <stdlib.h>
/*
EXERCÍCIO_3: Pseudocodigos/códigos
 Leia uma nota e se ela for igual ou superior a 6,0
 então imprime “Aprovado” senão imprime “Reprovado”. 
*/
int main(void)
{
    double nota;
    // Nota = 7.5;
    // Revisar como tilizar a comando gets.
    scanf("%lf", &nota);
    if (nota >= 6.0){
        /*Para restringir a quantidade de 0 após o vírgula/ponto, 
        basta colocar após %". X" e depois o tipo da variável.
        */
        printf("PARABENS, VOCE FOI APROVADO COM NOTA %.1lf\n", nota);
    }   else {
        printf("INFELIZMENTE VOCE REPROVOU!");
    }

    return 0;
}