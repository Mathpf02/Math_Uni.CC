#include <stdio.h>

// Fun��o principal
int main()
{
	char a[100]; // Nome do produto
	float b;	 // Pre�o do produto
	int c;		 // N�mero de parcelas
	float d;	 // Juros acumulado
	float e;	 // Pre�o final
	float f;	 // Valor da parcela
	// Entrada do nome do produto
	printf("Nome do produto: ");
	scanf("%s", a);
	// Entrada do pre�o do produto
	printf("Preco do produto: ");
	scanf("%f", &b);
	// Entrada do n�mero de parcelas
	printf("Quantas parcelas: ");
	scanf("%d", &c);
	// Se c � igual a 1
	if (c == 1)
	{
		// Pre�o final igual ao pre�o a vista
		e = b;
		printf("Valor total: %.2f\n", e);
		printf("Parcela 1: %.2f\n", e);
	}
	else
	{
		// Pre�o final igual �s parcelas com juros
		d = 0.0;
		e = b / c;
		printf("Parcela 1: %.2f\n", b / c);
		for (int i = 2; i <= c; i++)
		{
			d += 0.001;			   // Aumenta juros
			f = b / c + b / c * d; // C�lculo
			e += f;
			printf("Parcela %d: %.2f\n", i, f);
		}
		printf("Valor total: %.2f\n", e);
	}
	// Retorna 0 se chegou aqui
	return 0;
}
