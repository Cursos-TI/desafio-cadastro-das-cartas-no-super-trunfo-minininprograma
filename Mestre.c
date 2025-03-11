#include <stdio.h>

int main() {
    // Definição das variáveis para as duas cidades
    char estado1[7], estado2[7];
    char codigo1[4], codigo2[4];
    char nome1[30], nome2[30];
    unsigned long int populacao1, populacao2; // Mudança para unsigned long int
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Leitura dos dados da Cidade 1
    printf("DIGITE OS DADOS DA CIDADE 1: \n");
    printf("DIGITE O ESTADO: \n");
    scanf("%s", estado1);
    printf("CODIGO DA CIDADE: \n");
    scanf("%s", codigo1);
    printf("NOME DA CIDADE: \n");
    scanf("%s", nome1);
    printf("POPULACAO DA CIDADE: \n");
    scanf("%lu", &populacao1);
    printf("DIGITE A AREA DA CIDADE(em km2): \n");
    scanf("%f", &area1);
    printf("DIGITE SEU PIB(em milhoes): \n");
    scanf("%f", &pib1);
    printf("DIGITE SEUS PONTOS TURISTICOS: \n");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da Cidade 2
    printf("DIGITE OS DADOS DA CIDADE 2: \n");
    printf("DIGITE O ESTADO: \n");
    scanf("%s", estado2);
    printf("CODIGO DA CIDADE: \n");
    scanf("%s", codigo2);
    printf("NOME DA CIDADE: \n");
    scanf("%s", nome2);
    printf("POPULACAO DA CIDADE: \n");
    scanf("%lu", &populacao2);
    printf("DIGITE A AREA DA CIDADE (em km2): \n");
    scanf("%f", &area2);
    printf("DIGITE SEU PIB(em milhoes): \n");
    scanf("%f", &pib2);
    printf("DIGITE SEUS PONTOS TURISTICOS: \n");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da Densidade Populacional e PIB per Capita
    float densidade_populacional1 = populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1e6) / populacao1; // PIB em reais

    float densidade_populacional2 = populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1e6) / populacao2; // PIB em reais

    // Cálculo do Super Poder
    float super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Exibição dos resultados da Cidade 1
    printf("\nDADOS DA CIDADE 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("Pib: %.2f milhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("Pib per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição dos resultados da Cidade 2
    printf("\nDADOS DA CIDADE 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("Pib: %.2f milhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("Pib per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    return 0;
}