#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

// Objetivo:
// Nível Novato: cadastrar cartas com scanf e exibir com printf
// Nível Aventureiro: calcular densidade populacional e PIB per capita
// Nível Mestre: comparar duas cartas e determinar a vencedora

int main() {

    // ================================
    // Área para definição das variáveis
    // ================================

    char codigo1[4], codigo2[4];

    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Variáveis calculadas (Aventureiro)
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Super poder (Mestre)
    float super1, super2;


    // ================================
    // Área para entrada de dados
    // ================================

    printf("\n=== Cadastro da Carta 1 ===\n");

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);


    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);


    // ================================
    // Área de cálculos (Nível Aventureiro)
    // ================================

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Super poder (Nível Mestre)
    super1 = populacao1 + area1 + pib1 + pontos1 + densidade1 + pibPerCapita1;
    super2 = populacao2 + area2 + pib2 + pontos2 + densidade2 + pibPerCapita2;


    // ================================
    // Área para exibição dos dados
    // ================================

    printf("\n=== Carta 1 ===\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", super1);

    printf("\n=== Carta 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", super2);


    // ================================
    // Área de comparação (Nível Mestre)
    // ================================

    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: %s\n", (populacao1 > populacao2) ? codigo1 : codigo2);
    printf("Area: %s\n", (area1 > area2) ? codigo1 : codigo2);
    printf("PIB: %s\n", (pib1 > pib2) ? codigo1 : codigo2);
    printf("Pontos Turisticos: %s\n", (pontos1 > pontos2) ? codigo1 : codigo2);

    // Regra especial
    printf("Densidade: %s\n", (densidade1 < densidade2) ? codigo1 : codigo2);

    printf("PIB per Capita: %s\n", (pibPerCapita1 > pibPerCapita2) ? codigo1 : codigo2);
    printf("Super Poder: %s\n", (super1 > super2) ? codigo1 : codigo2);


    return 0;
} 
