#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  char codigo1[10], cidade1[50], estado1[50];
  int populacao1, turismo1;
  float area1, pib1;
  
  char codigo2[10], cidade2[50], estado2[50];
  int populacao2, turismo2;
  float area2, pib2;

  printf("===== CADASTRO CARTA 1 =====\n");
  printf("Codigo da carta: ");
  scanf("%s", codigo1);
  printf("Nome da cidade: ");
  scanf(" %49[^\n]", cidade1);
  printf("Nome do estado: ");
  scanf(" %49[^\n]", estado1);
  printf("Populacao: ");
  scanf("%d", &populacao1);
  printf("Area (km2): ");
  scanf("%f", &area1);
  printf("PIB (bilhoes): ");
  scanf("%f", &pib1);
  printf("Pontos turisticos: ");
  scanf("%d", &turismo1);

  printf("\n===== CADASTRO CARTA 2 =====\n");
  printf("Codigo da carta: ");
  scanf("%s", codigo2);
  printf("Nome da cidade: ");
  scanf(" %49[^\n]", cidade2);
  printf("Nome do estado: ");
  scanf(" %49[^\n]", estado2);
  printf("Populacao: ");
  scanf("%d", &populacao2);
  printf("Area (km2): ");
  scanf("%f", &area2);
  printf("PIB (bilhoes): ");
  scanf("%f", &pib2);
  printf("Pontos turisticos: ");
  scanf("&d", &turismo2);
  
  printf("\n===== CARTA 1 =====\n");
  printf("Codigo:            %s\n", codigo1);
  printf("Cidade:            %s\n", cidade1);
  printf("Estado:            %s\n", estado1);
  printf("Populacao:         %d habitantes\n", populacao1);
  printf("Area:              %.2f km2\n", area1);
  printf("PIB:               %.2f bilhoes\n", pib1);
  printf("Pontos turisticos: %d\n", turismo1);

  printf("\n===== CARTA 2 =====\n");
  printf("Codigo:            %s\n", codigo2);
  printf("Cidade:            %s\n", cidade2);
  printf("Estado:            %s\n", estado2);
  printf("Populacao:         %d habitantes\n", populacao2);
  printf("Area:              %.2f km2\n", area2);
  printf("PIB:               %.2f bilhoes\n", pib2);
  printf("Pontos turisticos: %d\n", turismo2);



return 0;
} 
