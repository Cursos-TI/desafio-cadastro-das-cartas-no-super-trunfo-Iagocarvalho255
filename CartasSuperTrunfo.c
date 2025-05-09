#include <stdio.h>

int main(){

// Definindo as variáveis para a cidade 1
char estado1[30]= "Bahia";
char cidade1[60] = "Salvador";
char codigodacidade1[15]= "A01";
int populacao1= 21548756;
int pontosturisticos1=30;
float PIB1 = 87610055.88;
float area1 = 940051.55;
float densidadepopulacional1 = 22.92;
float PIBpercapita1 = 4.07;
float Superpoder1 = 110098904.00;
char carta1[15]= "carta1";
// Definindo as variáveis para a cidade 2
  char estado2[20]= "Pernambuco";
  char cidade2[24]= "Recife";
  char codigodacidade2[10]= "A02";
  int populacao2= 14500215;
  int pontosturisticos2= 15;
  float PIB2= 15975325.77;
  float area2= 74195175.22;
  float densidadepopulacional2 = 0.20;
  float PIBpercapita2 = 1.10; 
  float Superpoder2 = 104670744.00;
  
//calculo do superpoder

  Superpoder1 = ((float) populacao1 + area1 + PIB1 + pontosturisticos1 + PIBpercapita1 + 1.0f / densidadepopulacional1 );

  Superpoder2 = ( (float) populacao2 +area2 + PIB2 + pontosturisticos2 + PIBpercapita2 + 1.0f / densidadepopulacional2 );


  
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

printf("Digite a Densidade populacional da cidade: \n");
scanf("%f", &densidadepopulacional1);

printf("Digite o PIB per capita da cidade: \n");
scanf("%f", &PIBpercapita1);


//Saída cidade 1
printf("Estado: %s\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("Código da cidade: %s\n", codigodacidade1);
printf("População: %d\n", populacao1);
printf("Pontos turísticos: %d\n", pontosturisticos1);
printf("PIB: %.2f\n", PIB1);
printf("Área: %.2f\n", area1);
printf("Densidade populacional da cidade: %.2f\n", densidadepopulacional1);
printf("PIB per capita da cidade: %.2f\n", PIBpercapita1);
printf("Superpoder da cidade 1 (%s): %.2f\n", cidade1, Superpoder1);

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

printf("Digite a Densidade populacional da cidade: \n");
scanf("%f", &densidadepopulacional2);

printf("Digite o PIB per capita da cidade: \n");
scanf("%f", &PIBpercapita2);



//Saída cidade 2
printf("Estado: %s\n", estado2);
printf("Cidade: %s\n", cidade2);
printf("Código da cidade: %s\n", codigodacidade2);
printf("População: %d\n", populacao2);
printf("Pontos turísticos: %d\n", pontosturisticos2);
printf("PIB: %.2f\n", PIB2);
printf("Área: %.2f\n", area2);
printf("Densidade populacional da cidade: %.2f\n", densidadepopulacional2);
printf("PIB per capita da cidade: %.2f\n", PIBpercapita2);
printf("Superpoder da cidade 2 (%s): %.2f\n", cidade2, Superpoder2);

// Comparação de atributos
printf("\n===== COMPARAÇÃO DE ATRIBUTOS =====\n");

    printf("\n===== RESULTADO DAS COMPARAÇÕES (0 = cidade1, 1 = cidade2) =====\n");
    printf("População: %d\n", (populacao1 > populacao2) ? 0 : 1);
    printf("Área: %d\n", (area1 > area2) ? 0 : 1);
    printf("PIB: %d\n", (PIB1 > PIB2) ? 0 : 1);
    printf("Pontos turísticos: %d\n", (pontosturisticos1 >pontosturisticos2) ? 0 : 1);
    printf("PIB per capita: %d\n", (PIBpercapita1 >PIBpercapita2) ? 0 : 1);
    printf("Densidade populacional inversa: %d\n", 
           (1.0f / densidadepopulacional1 > 1.0f / densidadepopulacional2) ? 0 : 1);
    printf("Superpoder: %d\n", (Superpoder1 >= Superpoder2) ? 0 : 1);


    
return 0;
}
