#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

  // VERIFICAÇÃO DO ESTOQUE
  int Est_1, Est_2, Est_3, Est_4, Est_5, estGERAL, faltESTOQUE;
  /*Est_1=Pão
    Est_2=Hamburguer
    Est_3=Folhas de Alface
    Est_4=Fatias de Cebola
    Est_5=Fatias de queijo
  */
  printf("Quantidade de Pães: ");
  scanf("%i", &Est_1);

  printf("Quantidade de Hambuerguers: ");
  scanf("%i", &Est_2);

  printf("Quantidades de Alface: ");
  scanf("%i", &Est_3);

  printf("Quantidade de Cebola: ");
  scanf("%i", &Est_4);

  printf("Quantidade de Queijo: ");
  scanf("%i", &Est_5);

  estGERAL = Est_1 + Est_2 + Est_3 + Est_4 + Est_5; 

  //VERIFICAÇÃO DE PEDIDO
  int xpedido_1, xpedido_2, xpedido_3, xpedido_4;
  /*x.pedido_1= H.Siri
    x.pedido_2= H.Siri Luxo
    x.pedido_3= H.Siri Luxo Duplo
    x.pedido_4= Combo Cascudo
  */
  printf("Quantidade de Pedidos: HAMBURGUER DE SIRI: ");
  scanf("%i", &xpedido_1);

  printf("Quantidade de Pedidos: HAMBURGUER DE SIRI LUXO: ");
  scanf("%i", &xpedido_2);

  printf("Quantidade de Pedidos: HAMBURGUER DE SIRI LUXO DUPLO: ");
  scanf("%i", &xpedido_3);

  printf("Quantidade de Pedidos: COMBO CASUDO: ");
  scanf("%i", &xpedido_4);

  //SUBTRAÇÃO DE PEDIDOS DO ESTOQUE
  int subpedido_1, subpedido_2, subpedido_3, subpedido_4, subTOTAL;
  /*sub.pedido_1= H.Siri 
    (1 Pão, 1 Hambúrguer Siri, 2 Folhas de Alface, 1 Rodela de Cebola e 2 Fatias de Queijo)
    sub.pedido_2= H.Siri Luxo 
    (1 Pão, 2 Hambúrgueres de Siri, 2 Folhas de aAface, 1 Rodela de Cebola e 3 Fatias de Queijo)
    sub.pedido_3= H.Siri Luxo Duplo 
    (1  Pão, 4 Hambúrgueres de Siri, 2 Folhas de Alface, 2 Rodelas de Cebola e 5 Fatias de Queijo)
    x.pedido_4= Combo Cascudo 
    (2 Pães, 2 Hambúrgueres de Siri, 2 folhas de alface, 2 Rodela de Cebola e 2 Fatia de Queijo)
  */
  subpedido_1 = xpedido_1 * 7;
  subpedido_2 = xpedido_2 * 9;
  subpedido_3 = xpedido_3 * 14;
  subpedido_4 = xpedido_4 * 10;

  subTOTAL = subpedido_1 + subpedido_2 + subpedido_3 + subpedido_4;

  if (estGERAL > subTOTAL){
    faltESTOQUE = estGERAL - subTOTAL;
    printf("FALTARÁ %i INGREDIENTES!", faltESTOQUE);
  }else{
    printf("TERÁ INGREDIENTES SUFICIENTES PARA PRODUÇÃO!");
  }

  return 0;
}