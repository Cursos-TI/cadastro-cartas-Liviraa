#include <stdio.h>

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


  
  printf("\n=== Fim da Exibição ===\n");
  return 0;
}

