#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (void) {
    /*char caractere;
    scanf("%c", &caractere);
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' ||caractere == 'u'){
        printf("É uma vogal minúscula!");
    } else {
        printf("Não é uma vogal miúscula!");
    }*/
    int numero;
    scanf("%d", &numero);
    if(numero%(3*2)==0){
        printf("E divisivel por 6!");
    } else {
        printf("Nao e divisivel por 6!");
    }
    return 0;
}
