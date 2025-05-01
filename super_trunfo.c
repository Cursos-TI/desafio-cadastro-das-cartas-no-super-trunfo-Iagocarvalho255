#include <stdio.h>

int main(){
// Cidade 1
char estado1[30]= "Bahia";
char cidade1[60] = "Salvador";
char codigodacidade1[15]= "A01";
int populacao1= 21548756;
int pontosturisticos1=30;
float PIB1 = 87610055.88;
float area1 = 940051.55;
float densidadepopulacional1 = 22.92;
float PIBpercapita1 = 4.07;

//Cidade 2
  char estado2[20]= "Pernambuco";
  char cidade2[24]= "Recife";
  char codigodacidade2[10]= "A02";
  int populacao2= 14500215;
  int pontosturisticos2= 15;
  float PIB2= 15975325.77;
  float area2= 74195175.22;
  float densidadepopulacional2 = 0.20;
  float PIBpercapita2 = 1.10;

//Cálculo da densidade populacional 
densidadepopulacional1 = (float)populacao1 / area1;
//Cálculo da densidade populacional2
densidadepopulacional2 = (float)populacao2 / area2;

//Cálculo do PIB per capita
PIBpercapita1 = PIB1 / populacao1; 
PIBpercapita2 = PIB2 / populacao2;

printf("Densidade populacional da cidade 1: %.2f\n", densidadepopulacional1);
printf("Densidade populacional da cidade 2: %.2f\n", densidadepopulacional2);
printf("PIB per capita da cidade 1: %.2f\n", PIBpercapita1);
printf("PIB per capita da cidade 2: %.2f\n", PIBpercapita2);

//Entrada cidade 1
printf("Digite o seu Estado: \n");
scanf("%s", estado1);

printf("Digite a Cidade: \n");
scanf("%s", cidade1);

printf("Digite o Código da cidade: \n");
scanf("%s", codigodacidade1);

printf("Digite a População: \n");
scanf("%d", &populacao1);

printf("Digite os Pontos turisticos: \n");
scanf("%d", &pontosturisticos1);

printf("Digite o PIB: \n");
scanf("%f", &PIB1);

printf("Digite a Área: \n");
scanf("%f", &area1);

//Saída cidade 1
printf("Estado: %s\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("Código da cidade: %s\n", codigodacidade1);
printf("População: %d\n", populacao1);
printf("Pontos turísticos: %d\n", pontosturisticos1);
printf("PIB: %.2f\n", PIB1);
printf("Área: %.2f\n", area1);

//Entrada cidade 2
printf("Digite o seu Estado: \n");
scanf("%s", estado2);

printf("Digite a Cidade: \n");
scanf("%s", cidade2);

printf("Digite o Código da cidade: \n");
scanf("%s", codigodacidade2);

printf("Digite a População: \n");
scanf("%d", &populacao2);

printf("Digite os Pontos turisticos: \n");
scanf("%d", &pontosturisticos2);

printf("Digite o PIB: \n");
scanf("%f", &PIB2);

printf("Digite a Área: \n");
scanf("%f", &area2);

//Saída cidade 2
printf("Estado: %s\n", estado2);
printf("Cidade: %s\n", cidade2);
printf("Código da cidade: %s\n", codigodacidade2);
printf("População: %d\n", populacao2);
printf("Pontos turísticos: %d\n", pontosturisticos2);
printf("PIB: %.2f\n", PIB2);
printf("Área: %.2f\n", area2);

    
return 0;
}