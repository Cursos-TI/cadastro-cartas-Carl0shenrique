#include <stdio.h>

int main() {
   // === Dados das cartas (pré-cadastradas) ===
    char nomePais1[50] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.0;
    float pib1 = 22000.0; // em bilhões
    int pontosTuristicos1 = 50;
    float densidade1 = populacao1 / area1;

    char nomePais2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 6000.0; // em bilhões
    int pontosTuristicos2 = 35;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    printf("=== SUPER TRUNFO - COMPARAÇÃO AVANÇADA ===\n\n");

    printf("Carta 1: %s\n", nomePais1);
    printf("Carta 2: %s\n\n", nomePais2);

    // === Menu para escolher o primeiro atributo ===
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    scanf("%d", &atributo1);

    // === Menu para escolher o segundo atributo, sem repetir o primeiro ===
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch(i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    scanf("%d", &atributo2);

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n\n");

    // === Obter valores do primeiro atributo usando switch ===
    switch(atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        default: printf("Atributo 1 inválido!\n"); return 0;
    }

    // === Obter valores do segundo atributo usando switch ===
    switch(atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        default: printf("Atributo 2 inválido!\n"); return 0;
    }

    // === Comparações individuais com if-else e operador ternário ===
    printf("Comparação do primeiro atributo:\n");
    if (atributo1 != 5) { // regra normal: maior vence
        printf("%s: %.2f\n%s: %.2f\n", nomePais1, valor1_carta1, nomePais2, valor1_carta2);
        printf("Vencedor: %s\n\n", (valor1_carta1 > valor1_carta2) ? nomePais1 :
                                    (valor1_carta2 > valor1_carta1) ? nomePais2 : "Empate!");
    } else { // densidade: menor vence
        printf("%s: %.2f\n%s: %.2f\n", nomePais1, valor1_carta1, nomePais2, valor1_carta2);
        printf("Vencedor: %s\n\n", (valor1_carta1 < valor1_carta2) ? nomePais1 :
                                    (valor1_carta2 < valor1_carta1) ? nomePais2 : "Empate!");
    }

    printf("Comparação do segundo atributo:\n");
    if (atributo2 != 5) {
        printf("%s: %.2f\n%s: %.2f\n", nomePais1, valor2_carta1, nomePais2, valor2_carta2);
        printf("Vencedor: %s\n\n", (valor2_carta1 > valor2_carta2) ? nomePais1 :
                                    (valor2_carta2 > valor2_carta1) ? nomePais2 : "Empate!");
    } else {
        printf("%s: %.2f\n%s: %.2f\n", nomePais1, valor2_carta1, nomePais2, valor2_carta2);
        printf("Vencedor: %s\n\n", (valor2_carta1 < valor2_carta2) ? nomePais1 :
                                    (valor2_carta2 < valor2_carta1) ? nomePais2 : "Empate!");
    }

    // === Soma dos atributos para determinar vencedor final ===
    float somaCarta1 = valor1_carta1 + valor2_carta1;
    float somaCarta2 = valor1_carta2 + valor2_carta2;

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n%s: %.2f\n", nomePais1, somaCarta1, nomePais2, somaCarta2);

    if (somaCarta1 > somaCarta2)
        printf("Vencedor final: %s!\n", nomePais1);
    else if (somaCarta2 > somaCarta1)
        printf("Vencedor final: %s!\n", nomePais2);
    else
        printf("Resultado final: Empate!\n");

    printf("\n=== FIM DA BATALHA ===\n");

    return 0;
}