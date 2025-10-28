#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
  int carta = 1;
  char codigo[10] = "A01";  
  char estado[50] = "São Paulo";
  char cidade [50] = "São Paulo";
  float populacao = 44.4;     // em milhões
  float area = 240000.0;    // em km²
  double pib = 3.13;        // em trilhões de reais
  int pontosTuristicos = 47;
 
    // Área para entrada de dados
  printf("Código: %s\n", codigo);
  printf("Carta: %d\n", carta);
  printf("Estado: %s\n", estado);
  printf("Cidade: %s\n", cidade);
  printf("População: %.1f milhões\n", populacao);
  printf("Área: %.0f km²\n", area);
  printf("PIB: %.2lf trilhões de reais\n", pib);
  printf("Pontos Turísticos: %d\n", pontosTuristicos);

return 0;
} 
