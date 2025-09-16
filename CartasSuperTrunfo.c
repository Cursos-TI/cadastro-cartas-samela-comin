#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado01[20],estado02[20];
  char codigo01[20],codigo02[20];
  char cidade01[20],cidade02[20];
  int populacao01, populacao02;
  float area01,area02;
  float pib01, pib02;
  int turismo01,turismo02;
  float densidadep1,densidadep2;
  float pibpc1,pibpc2;

  // Área para entrada de dados

  printf ("**Digite os dados da primeira Carta**\n");

  printf("Digite o Estado: \n");
  scanf("%s", &estado01);

  printf("Digite o código da carta: \n");
  scanf("%s", &codigo01);

  printf("Digite a Cidade: \n");
  scanf("%s", &cidade01);

  printf("Digite a população: \n");
  scanf("%d", &populacao01);

  printf("Digite a área em km²: \n");
  scanf("%f", &area01);

  printf("Digite o PIB: \n");
  scanf("%f", &pib01);

  printf("Digite o número de pontos turísticos: \n");
  scanf("%d", &turismo01);

  printf ("**Digite os dados da segunda carta:\n");
  printf("Digite o Estado: \n");
  scanf("%s", &estado02);

  printf("Digite o código da carta: \n");
  scanf("%s", &codigo02);

  printf("Digite a Cidade: \n");
  scanf("%s", &cidade02);

  printf("Digite a população: \n");
  scanf("%d", &populacao02);

  printf("Digite a área em km²: \n");
  scanf("%f", &area02);

  printf("Digite o PIB: \n");
  scanf("%f", &pib02);

  printf("Digite o número de pontos turísticos: \n");
  scanf("%d", &turismo02);

    // Calculando a Densidade populacional e a PIB per capita

  densidadep1 = (float) populacao01 / area01;
  densidadep2 = (float) populacao02 / area02;

  pibpc1 = (float) pib01 / populacao01;
  pibpc2 = (float) pib02 / populacao02;

    // Área para exibição dos dados da cidade

  printf ("CARTA 01:\n");
  printf("Estado: %s\n",estado01);
  printf("Código da carta: %s\n",codigo01);
  printf("Nome da Cidade: %s \n", cidade01);
  printf("População: %d \n",populacao01);
  printf("Área em km²: %.2f \n", area01);
  printf("PIB: %.2f \n",pib01);
  printf("Número de pontos turísticos: %d \n",turismo01);
  printf("Densidade populacional: %.2f\n",densidadep1);
  printf("PIB per capita: %.2f\n",pibpc1);

  printf("CARTA 02:\n");
  printf("Estado: %s\n",estado02);
  printf("Código da carta: %s\n",codigo02);
  printf("Nome da Cidade: %s \n", cidade02);
  printf("População: %d \n",populacao02);
  printf("Área em km²: %.2f \n", area02);
  printf("PIB: %.2f \n",pib02);
  printf("Número de pontos turísticos: %d \n",turismo02);
  printf("Densidade populacional: %.2f\n",densidadep2);
  printf("PIB per capita: %.2f\n",pibpc2);


return 0;
} 
