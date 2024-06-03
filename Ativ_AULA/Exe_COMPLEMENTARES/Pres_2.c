
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    double nota_1, nota_2, nota_3, nota_4, Nota_F;
    nota_1 = 10;
    nota_2 = 8;
    nota_3 = 4;
    nota_4 = 10;

    Nota_F = ((nota_1 * 2) + (nota_2 * 2) + (nota_3 * 3) + (nota_4 * 5)) / (2 + 2 + 3 + 5);

    printf("SUA MEDIA FOI DE: %f \n", Nota_F);
    return 0;
}
