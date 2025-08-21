#include <stdio.h>

int main() {
    // Dados da primeira carta
    char estado1;
    char codigo1[4];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Dados da segunda carta
    char estado2;
    char codigo2[4];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibindo os dados da primeira carta
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    // Exibindo os dados da segunda carta
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}
