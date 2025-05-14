#include <stdio.h>

int main () {
    // declaração das variaveis basicas para armazenar os valores das cartas
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
    
    //leitura e armazenamento dos dados das cartas
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

    //criação de valores e calculos para a densidade e a média do PID das cartas(nivel aventureiro)
    float densidade_1 = (float) populacao / area ;
    float densidade_2 = (float) populacao2 / area2 ;
    float PIB_PERCAPTA_1 = (float) (PIB * 1000000000)/ populacao ;
    float PIB_PERCAPTA_2 = (float) (PIB2 * 1000000000)/ populacao2 ;

    //calculando o super-poder(nivel mestre)

    float SuperPoder1 = (((float)populacao + (float)area + (float)N_pontos_turisticos + PIB_PERCAPTA_1 +(float)PIB)+ (1.0 / (float)densidade_1));

    float SuperPoder2 = (((float)populacao2 + (float)area2 + (float)N_pontos_turisticos2 + PIB_PERCAPTA_2 +(float)PIB2)+ (1.0 / (float)densidade_2));

    //exibição dos valores

    printf("\nCarta 1: \n");
    printf("  Estado: %s \n",estado);
    printf("  código: %s \n", codigo_da_carta);
    printf("  Nome da Cidade: %s \n", nome_da_cidade);
    printf("  População: %d \n", populacao);
    printf("  Área: %d km² \n", area);
    printf("  PIB: %.2f bilhões de reais\n", PIB);
    printf("  Número de Pontos Turísticos: %d\n", N_pontos_turisticos);
    printf("  Densidade populacional: %.2f \n", densidade_1); // atualização NV_aventureiro
    printf("  PIB per capita: %.2f \n", PIB_PERCAPTA_1); // atualização NV_aventureiro
    printf("  Super poder: %.3f \n", SuperPoder1); // atualização NV_mestre

  
    printf("\nCarta 2: \n");
    printf("  Estado: %s \n",estado2);
    printf("  código: %s \n", codigo_da_carta2);
    printf("  Nome da Cidade: %s \n", nome_da_cidade2);
    printf("  População: %d \n", populacao2);
    printf("  Área: %d km² \n", area2);
    printf("  PIB: %.2f bilhões de reais\n", PIB2);
    printf("  Número de Pontos Turísticos: %d\n", N_pontos_turisticos2);
    printf("  Densidade poppulacional: %.2f \n", densidade_2); // atualização NV_aventureiro
    printf("  PIB per capita: %.2f \n", PIB_PERCAPTA_2); // atualização NV_aventureiro
    printf("  Super poder: %.3f \n", SuperPoder2); // atualização NV_mestre

    //comparação das cartas(nivel mestre)
    int v_populacao = populacao2 > populacao;
    int v_area = area2 > area;
    int v_Pib = PIB2 > PIB;
    int v_turistico = N_pontos_turisticos2 > N_pontos_turisticos;
    int v_densidade = densidade_1 > densidade_2;
    int v_Pib_percapta = PIB_PERCAPTA_2 > PIB_PERCAPTA_1;
    int v_superPoder = SuperPoder2 > SuperPoder1;

    printf("\n CARTA VENCEDORA EM CADA ATRIBUTO\n");
    printf("  população : carta %d\n", v_populacao + 1);
    printf("  area: carta %d  \n", v_area + 1);
    printf("  PIB: carta %d \n", v_Pib + 1);
    printf("  Pontos turisticos: carta %d \n", v_turistico + 1);
    printf("  Densidade: carta %d \n", v_densidade + 1);
    printf("  PIB per capita: carta %d \n", v_Pib_percapta + 1);
    printf("  Super-Poder: carta %d \n", v_superPoder +1);


    return 0;

}