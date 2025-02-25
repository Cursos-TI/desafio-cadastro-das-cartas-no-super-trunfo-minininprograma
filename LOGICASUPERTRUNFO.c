#include <stdio.h>

int main(){

char estado1[2];
char codigo1[4];
char nome1[30];
int populacao1;
float area1;
float pib1;
int pontos_turisticos1;


char estado2[2];
char codigo2[4];
char nome2[30];
int populacao2;
float area2;
float pib2;
int pontos_turisticos2;


printf("DIGITE OS DADOS DA CIDADE 1: \n");
printf("DIGITE O ESTADO: \n");
scanf("%s" , &estado1);

printf("CODIGO DA CIDADE: \n");
scanf("%s" , &codigo1);

printf("NOME DA CIDADE: \n");
scanf("%s" , &nome1);

printf("POPULACAO DA CIDADE: \n");
scanf("%d" , &populacao1);

printf("DIGITE A AREA DA CIDADE(em km2): \n");
scanf("%f" , &area1);

printf("DIGITE SEU PIB(em milhoes): \n");
scanf("%f" , &pib1);

printf("DIGITE SEUS PONTOS TURISTICOS: \n");
scanf("%d" , &pontos_turisticos1);


printf("DIGITE OS DADOS DA CIDADE 2: \n");
printf("DIGITE O ESTADO: \n");
scanf("%s" , &estado2);

printf("CODIGO DA CIDADE: \n");
scanf("%s" , &codigo2);

printf("NOME DA CIDADE: \n");
scanf("%s" , &nome2);

printf("POPULACAO DA CIDADE : \n");
scanf("%d" , &populacao2);

printf("DIGITE A AREA DA CIDADE (em km2): \n");
scanf("%f" , &area2);

printf("DIGITE SEU PIB(em milhoes): \n");
scanf("%f" , &pib2);

printf("DIGITE SEUS PONTOS TURISTICOS: \n");
scanf("%d" , &pontos_turisticos2);

float densidade_populacional1 = populacao1 / area1;
float Pib_per_capita1 = (pib1 * 1e9) / populacao1;

float densidade_populacional2 = populacao2 / area2;
float Pib_per_capita2 = (pib2 * 1e9) / populacao2;

printf("\nDADOS DA CIDADE 1: \n");
printf("Estado: %s\n" , estado1);
printf("Codigo: %s\n" , codigo1);
printf("Nome: %s\n" , nome1);
printf("Populacao: %d\n" , populacao1);
printf("Area: %.2f km2\n" , area1);
printf("Pib: %.2f milhões de reais\n" , pib1);
 printf("Pontos_Turisticos: %d\n" , pontos_turisticos1);
printf("Densidade_Populacional: %f\n" , densidade_populacional1);
printf("Pib_per_Capita: %f\n" , Pib_per_capita1);

printf("\nDADOS DA CIDADE 1: \n");
printf("Estado: %s\n" , estado1);
printf("Codigo: %s\n" , codigo1);
printf("Nome: %s\n" , nome1);
printf("Populacao: %d\n" , populacao1);
printf("Area: %.2f km2\n" , area1);
printf("Pib: %.2f milhões de reais\n" , pib1);
 printf("Pontos_Turisticos: %d\n" , pontos_turisticos2);
printf("Densidade_Populacional: %f\n" , densidade_populacional2);
printf("Pib_per_Capita: %f\n" , Pib_per_capita2);

return 0;

}