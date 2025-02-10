#include <stdio.h>

int main(){

char codigo[4];
char nome[40];
int populacao;
float area;
float pib;
int pontos_turisticos;


printf("CADASTRO DA CIDADE: \n");
printf("CODIGO DA CIDADE: \n");
scanf("%s", codigo);

printf("NOME DA CIDADE: \n");
scanf("%s" , nome);

printf("POPULACAO: \n");
scanf("%d" , &populacao);

printf("AREA (em KM2): \n");
scanf("%f" , &area);

printf("PIB (em milhoes): \n");
scanf("%f" , &pib);

printf("PONTOS TURISTICOS: \n");
scanf("%d" , &pontos_turisticos);

printf("\nDADOS DA CIDADE CADASTRADA: \n");
printf("Codigo:%s\n" , codigo);
printf("Nome:%s\n" , nome);
printf("Populacao:%d\n" , populacao);
printf("Area: %.2f km²\n" , area);
printf("pib: %2.f milhões\n", pib);
printf("Pontos Turisticos: %d\n", pontos_turisticos);

return 0;















}

