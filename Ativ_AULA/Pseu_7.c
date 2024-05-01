#include <stdio.h>
#include <stdlib.h>


int main (void){
    double tmp_celsius, tmp_fahrenhit;
    printf("Digite uma temperatura em graus Celsius, para conversão:\n");
    scanf("%lf", &tmp_celsius);
    tmp_fahrenhit = (tmp_celsius + 160) /5;
    printf("A temperatura %.1lf graus Celsius, e dada como: %.1lf graus Fahrenhts.",
     tmp_celsius, tmp_fahrenhit);

    return 0;
}