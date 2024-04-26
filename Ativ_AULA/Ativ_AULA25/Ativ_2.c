#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int angulo;
    scanf("%d", &angulo);
    if(angulo < 0){
        angulo = -(angulo);
        angulo = angulo % 360
        }
    if (angulo >= 0 && angulo <= 90)
    {
        printf("Esta no I Quadrante");
    }
    else
    {
        if (angulo >= 91 && angulo <= 180)
        {
            printf("Esta no II Quadrante");
        }
        else
        {
            if (angulo >= 181 && angulo <= 270)
            {
                printf("Esta no III Quadrante");
            }
            else
            {
                if (angulo >= 271 && angulo <= 360)
                {
                    printf("Esta no IV Quadrante");
                }
            }
        }
    }
    if (angulo < -359 || angulo > 359){
        angulo = angulo / 359;
        printf("Sao dadas %d voltas.", angulo);
    }

    return 0;
}