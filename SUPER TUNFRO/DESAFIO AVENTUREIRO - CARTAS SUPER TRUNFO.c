#include<stdio.h>
#include<stdlib.h>

int main(){
  
  //nivel novato: 

  char estado[2] = "";
  char codigo_da_carta[4] = "";
  char nome_da_cidade[60] = "";
  int populacao = 0;
  int area = 0;
  float PIB = 0;
  int N_pontos_turisticos = 0; 

  char estado2 [2] = "";
  char codigo_da_carta2[4] = "";
  char nome_da_cidade2[60] = "";
  int populacao2=0;
  int area2=0;
  float PIB2=0;
  int N_pontos_turisticos2=0; 

  printf("insira os dados da carta 1\n");

  printf("  estado: ");
  scanf(" %1[^\n]", estado);
  

  printf("  código: ");
  scanf(" %4[^\n]", codigo_da_carta);
 

  printf("  nome da cidade: ");
  scanf(" %25[^\n]", nome_da_cidade);
  

  printf("  população: ");
  scanf("%d", &populacao);

  printf("  area em KM²: ");
  scanf("%d", &area);

  printf("  PIB(em bihões): ");
  scanf("%f", &PIB);

  printf("  Número de pontos turisticos: ");
  scanf("%d", &N_pontos_turisticos);

  printf("\n insira os dados da carta 2: \n\n");

  printf("  estado: ");
  scanf(" %1[^\n]", estado2);
  

  printf("  código: ");
  scanf(" %4[^\n]", codigo_da_carta2);
  

  printf("  nome da cidade: ");
  scanf(" %25[^\n]", nome_da_cidade2);
  

  printf("  população: ");
  scanf("%d", &populacao2);

  printf("  area em KM²: ");
  scanf("%d", &area2);

  printf("  PIB(em bilhões): ");
  scanf("%f", &PIB2);

  printf("  Número de pontos turisticos: ");
  scanf("%d", &N_pontos_turisticos2);

  //fim nivel novato.

  // adição nivel aventureiro:
  float densidade_1 = (float) populacao / area ;
  float densidade_2 = (float) populacao2 / area2 ;
  float PIB_PERCAPTA_1 = (float) (PIB * 1000000000)/ populacao ;
  float PIB_PERCAPTA_2 = (float) (PIB2 * 1000000000)/ populacao2 ;
  // fim atualização nivel aventureiro

  printf("Carta 1: \n");
  printf("  Estado: %s \n",estado);
  printf("  código: %s \n", codigo_da_carta);
  printf("  Nome da Cidade: %s \n", nome_da_cidade);
  printf("  População: %d \n", populacao);
  printf("  Área: %d km² \n", area);
  printf("  PIB: %.2f bilhões de reais\n", PIB);
  printf("  Número de Pontos Turísticos: %d\n", N_pontos_turisticos);
  printf("  Densidade populacional: %.2f \n", densidade_1); // atualização NV_aventureiro
  printf("  PIB per capita: %.2f \n", PIB_PERCAPTA_1); // atualização NV_aventureiro

  
  printf("Carta 2: \n");
  printf("  Estado: %s \n",estado2);
  printf("  código: %s \n", codigo_da_carta2);
  printf("  Nome da Cidade: %s \n", nome_da_cidade2);
  printf("  População: %d \n", populacao2);
  printf("  Área: %d km² \n", area2);
  printf("  PIB: %.2f bilhões de reais\n", PIB2);
  printf("  Número de Pontos Turísticos: %d\n", N_pontos_turisticos2);
  printf("  Densidade poppulacional: %.2f \n", densidade_2); // atualização NV_aventureiro
  printf("  PIB per capita: %.2f \n", PIB_PERCAPTA_2); // atualização NV_aventureiro


 return 0;

}