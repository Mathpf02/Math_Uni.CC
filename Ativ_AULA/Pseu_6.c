#include <stdio.h>
#include <stdlib.h>
// ou = "||", já o E = "&&" e o não = "!"
int main(void){
    int trab_ano, calc_ano;
    double bon_ano;
    printf("Digite seu tempo de trabalho, para calcularmos o valor de seu bonus :\nDIGITE AQUI = ");
    scanf("%i", &trab_ano);

    if (trab_ano >= 5){
        calc_ano = (trab_ano / 5);
        bon_ano = (1412.00 * 2) * calc_ano;
        printf("Seu tempo de trabalho contabilizados sao de %i anos.\n Por tanto voce recebera um bonus no valor de R$%.2lf, refente ao seu tempo de trabalho.", calc_ano, bon_ano);
        return 0;

    } else if(trab_ano < 5);{
       printf("Voce ainda nao tem direito a receber bonus salarial!");
        return 0;
    }
    return 0;
}

