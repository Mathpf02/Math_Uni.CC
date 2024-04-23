#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n1, n5;
    n1 = 2000000000;
    n5 = 7;

    double n2, n3;
    n2 = 3.1415265358;
    n3 = -33;

    char n4;
    n4 = 'A';

    printf("%d\n %d\n", n1, n5);
    printf("%f\n %f\n", n2, n3);
    printf("%c\n", n4);

    return 0;
}