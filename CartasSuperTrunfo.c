#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // declaração das váriaveis para a Carta 1
    char estado1;
    char codigo1[4];             // Exemplo: A01 (3 caracteres + 1 para o \0)
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

  //declaração das váriaveis para a Carta 2
    char estado2;
    char codigo2[4];             // Exemplo: A01 (3 caracteres + 1 para o \0)
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;


  // Introdução
    printf(" *** SUPER TRUNFO - DESAFIO FINAL *** \n ");
  
    // Leitura da Carta 1
    printf("Digite a letra do estado (A até H):  ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a Área (em km²)\n");
    scanf("%f", &area1);

    printf("Digite o pib: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Leitura da Carta 2
    printf(" Cadastro da Carta 2 \n ");

    printf("Digite a letra do estado (A até H):  ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área (em km²)\n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Cálculos das cartas 
    densidadePopulacional1 = (float) populacao1 / area1;
    densidadePopulacional2 = (float) populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Calculo do super poder
    superPoder1 = (float) populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);
    superPoder1 = (float) populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);
    
  // Exibição das informações

    printf("\n Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %2.f hab/km²\n", densidadePopulacional1);
    printf("Pib per Capita: %2.f reais \n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    
    printf("Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n"), densidadePopulacional2;
    printf("Pib per Capita: %.2f reais \n", pibPerCapita2);
    printf("Super Poder: %.2f\n"), superPoder2;

    // Comparações entre as cartas
    printf("\n\n=== COMPARAÇÃO DE CARTAS ===\n");

    printf("População: %s venceu!\n", (populacao1 > populacao2)? "Carta 1" : "Carta 2");
    printf("Área: %s venceu!\n", (area1 > area2)? "Carta 1" : "Carta 2" );
    printf("PIB: %s venceu!\n", (pib1 > pib2) ? "Carta 1" : "Carta 2");
    printf("Pontos Turísticos: %s venceu!\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1" : "Carta 2");
    printf("Densidade Populacional: %s venceu!\n", (densidadePopulacional1 < densidadePopulacional2) ? "Carta 1" : "Carta 2");
    printf("PIB per Capita: %s venceu!\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1" : "Carta 2");
    printf("Super Poder: %s venceu!\n", (superPoder1 > superPoder2) ? "Carta 1" : "Carta 2");

    printf("\n=================================\n");
    printf("Fim da comparação! Boa sorte no jogo!\n");
    
return 0;
} 
