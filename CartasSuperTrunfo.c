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
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;


  //declaração das váriaveis para a Carta 2
    char estado2;
    char codigo2[4];             // Exemplo: A01 (3 caracteres + 1 para o \0)
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    


  // === Cadastro da Carta 1 ===
    printf(" === Cadastro de Cartas do Super Trunfo ===\n ");
  
    // Leitura da Carta 1
    printf("Digite a letra do estado (A até H):  ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²)\n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Cálculos
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    printf ("\n ----------------------------\n");

    // Leitura da Carta 2
    printf(" Cadastro da Carta 2 \n ");

    printf("Digite a letra do estado (A até H):  ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²)\n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf ("\n ---------------------------------\n");
    
    // === Exibição dos Dados ===
    printf("Carta 1: %s (%c)\n", nomeCidade1, estado1);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n",
           populacao1, area1, pib1, densidadePopulacional1, pibPerCapita1);

    printf("\nCarta 2: %s (%c)\n", nomeCidade2, estado2);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n",
           populacao2, area2, pib2, densidadePopulacional2, pibPerCapita2);

    printf("\n=================================\n");

    // === Escolha do atributo de comparação ===
    // Altere o valor da variável abaixo para o atributo desejado:
    // 1 = População | 2 = Área | 3 = PIB | 4 = Densidade Populacional | 5 = PIB per Capita
    int atributoEscolhido = 1; // 🔹 escolha aqui o atributo da comparação (exemplo: 1 = população)

    printf("=== Comparação de Cartas ===\n");

    if (atributoEscolhido == 1) {
        // Comparação por POPULAÇÃO
        printf("\nComparação de cartas (Atributo: População):\n\n");
        printf("Carta 1 - %s (%c): %d\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%c): %d\n", nomeCidade2, estado2, populacao2);

        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (atributoEscolhido == 2) {
        // Comparação por ÁREA
        printf("\nComparação de cartas (Atributo: Área):\n\n");
        printf("Carta 1 - %s (%c): %.2f km²\n", nomeCidade1, estado1, area1);
        printf("Carta 2 - %s (%c): %.2f km²\n", nomeCidade2, estado2, area2);

        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (area2 > area1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (atributoEscolhido == 3) {
        // Comparação por PIB
        printf("\nComparação de cartas (Atributo: PIB):\n\n");
        printf("Carta 1 - %s (%c): %.2f bilhões\n", nomeCidade1, estado1, pib1);
        printf("Carta 2 - %s (%c): %.2f bilhões\n", nomeCidade2, estado2, pib2);

        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (atributoEscolhido == 4) {
        // Comparação por DENSIDADE POPULACIONAL (menor vence!)
        printf("\nComparação de cartas (Atributo: Densidade Populacional):\n\n");
        printf("Carta 1 - %s (%c): %.2f hab/km²\n", nomeCidade1, estado1, densidadePopulacional1);
        printf("Carta 2 - %s (%c): %.2f hab/km²\n", nomeCidade2, estado2, densidadePopulacional2);

        if (densidadePopulacional1 < densidadePopulacional2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (densidadePopulacional2 < densidadePopulacional1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (atributoEscolhido == 5) {
        // Comparação por PIB PER CAPITA
        printf("\nComparação de cartas (Atributo: PIB per Capita):\n\n");
        printf("Carta 1 - %s (%c): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (%c): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);

        if (pibPerCapita1 > pibPerCapita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (pibPerCapita2 > pibPerCapita1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    }

    else {
        printf("Atributo inválido!\n");
    }

    printf("\n=== Fim da Comparação ===\n");

    return 0;
}
   

