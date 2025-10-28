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
    float populacao1 = 46.1;       // milhões
    float area1 = 248219.0;        // km²
    double pib1 = 3.5;            // trilhões de reais
    int pontosTuristicos1 = 37;

    // Carta 2 - Rio de Janeiro

    int carta2 = 2;
    char codigo2[10] = "A02";    
    char estado2[50] = "Rio de Janeiro";
    char cidade2[50] = "Rio de Janeiro";
    float populacao2 = 16.055;       // milhões
    float area2 = 43751.0;         // km²
    double pib2 = 1.3;            // trilhões de reais
    int pontosTuristicos2 = 50;

  // Área para entrada de dados

    printf("=== Carta 1 ===\n");
    printf("Código: %s\n", codigo1);
    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.1f milhões\n", populacao1);
    printf("Área: %.0f km²\n", area1);
    printf("PIB: %.2lf trilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

  // Área para entrada de dados

    printf("\n=== Carta 2 ===\n");
    printf("Código: %s\n", codigo2);
    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.1f milhões\n", populacao2);
    printf("Área: %.0f km²\n", area2);
    printf("PIB: %.2lf trilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

  printf("\n=== Fim da Exibição ===\n");
  return 0;
}

