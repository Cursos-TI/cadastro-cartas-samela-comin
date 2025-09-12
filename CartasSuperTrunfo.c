#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado;
  char codigo [10];
  char cidade [20];
  int população;
  float area;
  float pib;
  int turismo;

  // Área para entrada de dados

  printf("Digite o Estado: \n");
  scanf("%s", &estado);

  printf("Digite o código da carta: \n");
  scanf("%s", &codigo);

  printf("Digite a Cidade: \n");
  scanf("%s", &cidade);

  printf("Digite a população: \n");
  scanf("%d", &população);

  printf("Digite a área em km²: \n");
  scanf("%f", &area);

  printf("Digite o PIB: \n");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: \n");
  scanf("%d", &turismo);

  // Área para exibição dos dados da cidade

  //printf("Estado: %s\n",estado);
  //printf("Código da carta: %s\n",codigo);
  //printf("Nome da Cidade: %s \n", cidade);
  //printf("População: %d \n",população);
  //printf("Área em km²: %f \n", area);
  //printf("PIB: %f \n",pib);
  //printf("Número de pontos turísticos: %d \n",turismo);



return 0;
} 
