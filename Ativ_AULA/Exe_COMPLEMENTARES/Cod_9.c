#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (void){
    char cargo, turno;
    double horasTrabalhadas, salario;

    scanf("%c", &cargo);
    getchar();

    scanf("%c", &turno);

    scanf("%lf", &horasTrabalhadas);

    cargo = toupper(cargo);

    turno = toupper(turno);

    if (cargo == 'O') {
        if (turno == 'M'){
            salario = horasTrabalhadas * 15.95;
            printf("%.2lf", salario);
        } else if (turno == 'V'){
            salario = (horasTrabalhadas * 15.95) * 1.125;
            printf("%.2lf", salario);
        } else if (turno == 'N'){
            salario = (horasTrabalhadas * 15.95) * 1.275;
            printf("%.2lf", salario);
        } else {
            printf("Turno foi inserido inválido.");
        }
    } else if (cargo == 'G'){
        if (turno == 'M'){
            salario = horasTrabalhadas * 22.14;
            printf("%.2lf", salario);
        } else if (turno == 'V'){
            salario = (horasTrabalhadas * 22.14) * 1.125;
            printf("%.2lf", salario);
        } else if (turno == 'N') {
            salario = (horasTrabalhadas * 22.14) * 1.275;
            printf("%.2lf", salario);
        } else {
            printf("O valor turno foi inserido invalido.");
        }
    }else {
        printf("O valor cargo foi inserido incorretamente");
    }

    return 0;
}