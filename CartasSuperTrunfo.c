#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    // Carta 1 - São Paulo

    int carta1 = 1;
    char codigo1[10] = "A01";    
    char estado1[50] = "São Paulo";
    char cidade1[50] = "São Paulo";
    float populacao1 = 12325000;       // Milhões
    float area1 = 1521.11;        // Km²
    float pib1 = 699280000000.00;            // Bilhões de reais
    int pontosTuristicos1 = 37;
    float densidade1 = populacao1 / area1; // Hab/km²
    double pibpercapita1 = pib1 / populacao1; // Reais
    float inverso1 = 1 / densidade1;
    float superpoder1 = populacao1 + area1 + pib1 + pibpercapita1 + pontosTuristicos1 + inverso1;

    // Área para entrada de dados A01

    printf("=== Carta 1 ===\n");
    printf("Código: %s\n", codigo1);
    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.1f milhões\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per Capita: %.2lf\n", pibpercapita1);
    printf("Super Poder: %.1f\n", superpoder1);

    // Carta 2 - Rio de Janeiro

    int carta2 = 2;
    char codigo2[10] = "A02";    
    char estado2[50] = "Rio de Janeiro";
    char cidade2[50] = "Rio de Janeiro";
    float populacao2 = 6748000;       // Milhões
    float area2 = 1200.25;         // km²
    float pib2 = 300500000000.00;            // Bilhões
    int pontosTuristicos2 = 50;
    float densidade2 = populacao2 / area2;
    double pibpercapita2 = pib2 / populacao2;
    float inverso2 = 1 / densidade2;
    float superpoder2 = populacao2 + area2 + pib2 + pibpercapita2 + pontosTuristicos2 + inverso2;

  
  // Área para entrada de dados A02

    printf("\n=== Carta 2 ===\n");
    printf("Código: %s\n", codigo2);
    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.1f Milhões\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf Bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB Per Capita: %.2lf\n", pibpercapita2);
    printf("Super Poder: %.1f\n", superpoder2);

    // Comparativo de Falso e Verdadeiro (1 e 0)

   /* printf("\n=== RESULTADO DA COMPARAÇÃO 1 ===\n");

   // printf("População: Carta 1 Venceu %d\n", populacao1 > populacao2);
   // printf("Área: Carta 1 venceu %d\n", area1 > area2);
   // printf("PIB: Carta 1 venceu %d\n", pib1 > pib2);
   // printf("Pontos Turísticos: Carta 1 venceu %d\n", pontosTuristicos1 > pontosTuristicos2);
   // printf("Densidade Populacional: Carta 1 venceu %d\n", densidade1 < densidade2);
   // printf("PIB per Capita: Carta 1 venceu %d\n", pibpercapita1 > pibpercapita2);
   // printf("Super Poder: Carta 1 venceu %d\n", superpoder1 < superpoder2);

    // Comparativo Estrutura if e else

   // printf("\n=== RESULTADO DA COMPARAÇÃO 2 ===\n");

   if (populacao1 > populacao2){
   printf("População: São Paulo venceu.\n");
   } else {
   printf("População: Rio de Janeiro venceu.\n");
   }
    
   if (area1 > area2){
   printf("Área: São Paulo venceu.\n");
   } else {
   printf("Área: Rio de Janeiro venceu.\n");
   }

   if (pib1 > pib2){
   printf("PIB: São Paulo venceu.\n");
   } else {
   printf("PIB: Rio de Janeiro venceu.\n");
   }

   if (pontosTuristicos1 > pontosTuristicos2){
   printf("Pontos Turísticos: São Paulo venceu.\n");
   } else {
   printf("Pontos Turísticos: Rio de Janeiro venceu.\n");
   }

   if (pibpercapita1 > pibpercapita2){
   printf("PIB per Capita: São Paulo venceu.\n");
   } else {
   printf("PIB per Capita: Rio de Janeiro venceu.\n");
   }

   if (densidade1 > densidade2){
   printf("Densidade: São Paulo venceu.\n");
   } else {
   printf("Densidade: Rio de Janeiro venceu.\n");
   }

   if (superpoder1 > superpoder2){ 
   printf("Super Poder: São Paulo venceu.\n");
   } else {
   printf("Super Poder: Rio de Janeiro venceu.\n");
   }*/

   printf("\n=== Bem-vindo ao SUPER TRUNFO: BRASIL ===\n");

   srand(time(0));
   int escolha1, escolha2;
   int vitoria1 = 0, vitoria2 = 0;

   // Código carta 1 e carta 2
   printf("Escolha o primeiro atributo:  \n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Número de pontos turísticos\n");
   printf("5. Densidade demográfica\n");
   scanf("%d", &escolha1);

   if (escolha1 < 1 || escolha1 > 5){
      printf("ATRIBUTO INVÁLIDO!\n");
      return 0;
   }

   printf("Escolha o segundo atributo:  \n");
   scanf("%d", &escolha2);

   if (escolha2 < 1 || escolha2 > 5){
      printf("ATRIBUTO INVÁLIDO!\n");
      return 0;
   }

   // Código escolha primeiro atributo:
   switch (escolha1)
   {
   case 1:
      printf("Atributo: População\n");
      (populacao1 > pontosTuristicos2) ? vitoria1++ :(populacao2 > populacao1) ? vitoria2++:
      printf("Empate em População!\n");
      break;
   case 2:
      printf("Atributo: Área\n");
      (area1 > area2) ? vitoria1++ : (area2 > area1) ? vitoria2++ :
      printf("Empate em Área!\n");
      break;
   case 3:
      printf("Atributo: PIB\n");
      (pib1 > pib2) ? vitoria1++ : (pib2 > pib1) ? vitoria2++ :
      printf("Empate em PIB!\n");
      break;
   case 4:
      printf("Atributo: Número de pontos turísticos\n");
      (pontosTuristicos1 > pontosTuristicos2) ? vitoria1++ : (pontosTuristicos2 > pontosTuristicos1) ? vitoria2++ :
      printf("Empate em Pontos Turísticos!\n");
      break;
   case 5:
      printf("Atributo: Densidade demográfica\n");
      (inverso1 < inverso2) ? vitoria1++ : (inverso2 < inverso1) ? vitoria2++ :
      printf("Empate em densidade demográfica!\n");
      break;
   default:
      printf("Opção Inválida\n");
      break;
   }

      // Código escolha segundo atributo:
      if (escolha1 == escolha2){
      printf("INVÁLIDO: Você escolheu o mesmo atributo!\n");
      return 0;
   }

      // Código escolha primeiro atributo:
   switch (escolha2)
   {
   case 1:
      printf("Atributo: População\n");
      (populacao1 > pontosTuristicos2) ? vitoria1++ :(populacao2 > populacao1) ? vitoria2++:
      printf("Empate em População!\n");
      break;
   case 2:
      printf("Atributo: Área\n");
      (area1 > area2) ? vitoria1++ : (area2 > area1) ? vitoria2++ :
      printf("Empate em Área!\n");
      break;
   case 3:
      printf("Atributo: PIB\n");
      (pib1 > pib2) ? vitoria1++ : (pib2 > pib1) ? vitoria2++ :
      printf("Empate em PIB!\n");
      break;
   case 4:
      printf("Atributo: Número de pontos turísticos\n");
      (pontosTuristicos1 > pontosTuristicos2) ? vitoria1++ : (pontosTuristicos2 > pontosTuristicos1) ? vitoria2++ :
      printf("Empate em Pontos Turísticos!\n");
      break;
   case 5:
      printf("Atributo: Densidade demográfica\n");
      (inverso1 < inverso2) ? vitoria1++ : (inverso2 < inverso1) ? vitoria2++ :
      printf("Empate em densidade demográfica!\n");
      break;
   default:
      printf("Opção Inválida\n");
      break;
   }

   
   printf("\n === RESULTADO DA PARTIDA! ===\n");
   printf("Vitórias da carta 1 (%s): %d\n", cidade1, vitoria1);
   printf("Vitórias da carta 2 (%s): %d\n", cidade2, vitoria2);

   (vitoria1 > vitoria2) ? printf("Carta 1 BRASIL: São Paulo venceu!\n"):
   (vitoria2 > vitoria1) ? printf("Carta 2 BRASIL: Rio de Janeiro venceu!\n"):
   printf("EMPATE!\n");



  
  printf("\n=== Fim da Exibição ===\n");
  return 0;

}

