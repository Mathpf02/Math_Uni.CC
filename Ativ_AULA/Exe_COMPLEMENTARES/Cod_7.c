#include <stdio.h>
#include <stdlib.h>

int main (void){
    int horas, minutos, segundos;

    scanf("%i", &horas);
    scanf("%i", &minutos);
    scanf("%i", &segundos);

    if (horas >= 0 && horas <= 23 && minutos >= 0 && minutos <= 59 && segundos >= 0 && segundos <= 59){
        printf("A hora é válda!\n");
        printf("Os minutos são válidos.\n");
        printf("Os segndos são válidos. \n");
        printf("%i:%i:%i", horas, minutos, segundos);
    } else {
        printf("A hora é inválida.\n");
    }

    return 0;
}