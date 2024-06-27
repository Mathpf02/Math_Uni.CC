#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int idade_ps, calc_dia, bi_ano;
    scanf("%i", &idade_ps);

    if (idade_ps > 4){
        bi_ano = (idade_ps / 4) * 1;
        calc_dia = (idade_ps * 365) + bi_ano;
        printf("Seus dias vividos sao de: %i\t", calc_dia);

    }else{
        calc_dia = idade_ps * 365;
        printf("Seus dias vividos sao de:%i\t", calc_dia);
    }

    return 0;
}