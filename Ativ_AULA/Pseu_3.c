#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double Nota;
    //Nota = 7.5;
    scanf("%f", Nota);
    if (Nota <= 6.0){
        printf("PARABENS, VOCE FOI APROVADO COM NOTA %f \n", Nota);
    }   else {
        printf("INFELIZMENTE VOCE REPROVOU!");
    }

    return 0;
}