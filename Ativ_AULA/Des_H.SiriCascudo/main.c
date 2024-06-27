#include <stdio.h>
#include <stdlib.h>


int main() {
    int pao, hamburguer_siri, alface, cebola, queijo;

    // Ler a quantidade de cada ingrediente disponível no estoque
    printf("Digite a quantidade de pães disponíveis: ");
    scanf("%d", &pao);
    printf("Digite a quantidade de hambúrgueres de siri disponíveis: ");
    scanf("%d", &hamburguer_siri);
    printf("Digite a quantidade de folhas de alface disponíveis: ");
    scanf("%d", &alface);
    printf("Digite a quantidade de rodelas de cebola disponíveis: ");
    scanf("%d", &cebola);
    printf("Digite a quantidade de fatias de queijo disponíveis: ");
    scanf("%d", &queijo);

    // Verificar a falta de algum ingrediente
    if (pao < 1 || hamburguer_siri < 1 || alface < 1 || cebola < 1 || queijo < 1){
    	printf("Há algum produto em falta!");
	} else {
		// Calcular a quantidade de cada lanche que pode ser vendido
		int hamburguer_siri_vendidos = hamburguer_siri;
		int hamburguer_luxo_vendidos = hamburguer_siri / 2;
		int hamburguer_luxo_duplo_vendidos = hamburguer_siri / 4;
		int combo_cascudo_vendidos = pao / 2;

	    // Calcular a quantidade de horas que o Siri Cascudo consegue ficar aberto
	    int horas_aberto = hamburguer_luxo_duplo_vendidos / 3;
	    horas_aberto += hamburguer_luxo_vendidos / 8;
	    horas_aberto += combo_cascudo_vendidos / 14;
	    horas_aberto += hamburguer_siri_vendidos / 27;
	
	    // Calcular a quantidade de dinheiro arrecadado
	    float dinheiro_arrecadado = hamburguer_luxo_duplo_vendidos * 2.75;
	    dinheiro_arrecadado += hamburguer_luxo_vendidos * 1.75;
	    dinheiro_arrecadado += combo_cascudo_vendidos * 2.00;
	    dinheiro_arrecadado += hamburguer_siri_vendidos * 1.00;
	
	    // Mostrar os resultados
	    printf("O Siri Cascudo consegue ficar aberto por %d horas.\n", horas_aberto);
	    printf("O Siri Cascudo arrecadou R$ %.2f.\n", dinheiro_arrecadado);
	}
	   
	return 0;
	
	system("pause");
       
}