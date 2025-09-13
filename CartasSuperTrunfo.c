#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades da 1º carta!
  int popCidade1, pontosTuristicos1;
  float areaCidade1, pibCidade1;
  char nomeEstado1[20], codigoCarta1[5], nomeCidade1[20];
  
  // Área para definição das variáveis para armazenar as propriedades da 2º carta!
  int popCidade2, pontosTuristicos2;
  float areaCidade2, pibCidade2;
  char nomeEstado2[20], codigoCarta2[5], nomeCidade2[20];
  
  // Aqui ocorrerá a entrada dos dados fornecidos pelo usuário.
  printf("Insira os dados da primeira carta!\n\n"); 
  printf("Digite o nome do Estado:  \n"); 
  scanf("%s", nomeEstado1);

  printf("Digite o código da carta:  \n");
  scanf("%s", codigoCarta1); 

  printf("Digite o nome da Cidade:  \n");
  fgets(nomeCidade1, 20, stdin); // Usando fgets para permitir nomes com espaços

  printf("Digite a quantidade da população nesta cidade:  \n");
  scanf("%d", &popCidade1);

  printf("Digite a área em quilômetros quadrados:  \n");
  scanf("%f", &areaCidade1);

  printf("Digite o PIB da cidade:  \n");
  scanf("%f", &pibCidade1);

  printf("Digite a quantidade de pontos turísticos da cidade:  \n");
  scanf("%d", &pontosTuristicos1);

  printf("\n Carta 1 salva com sucesso!\n\n Agora, introduza os dados da segunda carta!\n\n");

  printf("Digite o nome do Estado:  \n");
  scanf("%s", nomeEstado2);
  
  printf("Digite o código da carta:  \n");
  scanf("%s", codigoCarta1);

  printf("Digite o nome da Cidade:  \n");
  scanf("%s", nomeCidade2);

  printf("Digite a quantidade da população nesta cidade:  \n");
  scanf("%d", &popCidade2);

  printf("Digite a área em quilômetros quadrados:  \n");
  scanf("%f", &areaCidade2);

  printf("Digite o PIB da cidade:  \n");
  scanf("%f", &pibCidade2);
  
  printf("Digite a quantidade de pontos turísticos da cidade:  \n");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade

return 0;
} 
