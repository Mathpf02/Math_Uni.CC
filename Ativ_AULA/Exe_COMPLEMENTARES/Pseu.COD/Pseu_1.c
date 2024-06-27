#include <stdio.h>
#include <stdlib.h>
/*
EXERCÍCIO_1: Pseudocodigos/códigos
Escreva um pseudocódigo que recebe a base e a altura de um retângulo
 e calcula e imprime a área. 
*/
int main(void){
    int bas_TR, alt_TR, cal_TR;
    //Realizar com entrada via gets, masi tarede.
     bas_TR= 25;
     alt_TR= 10;
    cal_TR = (bas_TR*alt_TR)/2;

    printf("A area do Triangulo é: %d\n",cal_TR);

    return 0;
}