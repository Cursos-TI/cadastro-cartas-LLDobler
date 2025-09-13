#include <stdio.h>
#include <stdlib.h>

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
  char nomeEstado2[15], codigoCarta2[6], nomeCidade2[16];
  
  // Aqui ocorrerá a entrada dos dados fornecidos pelo usuário.

  printf("Insira os dados da primeira carta!\n\n"); 
  printf("Digite o nome do Estado:  \n"); 
  fgets(nomeEstado1, 20, stdin); // Usando fgets para permitir nomes com espaços

  printf("Digite o código da carta:  \n");
  scanf("%s", codigoCarta1); 
  getchar(); // Limpar o buffer do stdin após scanf  

  printf("Digite o nome da Cidade:  \n");
  fgets(nomeCidade1, 20, stdin); 

  printf("Digite a quantidade da população nesta cidade:  \n");
  scanf("%d", &popCidade1);

  printf("Digite a área em quilômetros quadrados:  \n");
  scanf("%f", &areaCidade1);

  printf("Digite o PIB da cidade:  \n");
  scanf("%f", &pibCidade1);

  printf("Digite a quantidade de pontos turísticos da cidade:  \n");
  scanf("%d", &pontosTuristicos1);
  getchar(); 

  // Área para entrada dos dados da segunda carta ------------------------------------------

  printf("\n Carta 1 salva com sucesso!\n\n Agora, introduza os dados da segunda carta!\n\n");
  printf("Digite o nome do Estado:  \n"); 
  fgets(nomeEstado2, 15, stdin);

  printf("Digite o código da carta:  \n");
  scanf("%s", codigoCarta2);
  getchar();   

  printf("Digite o nome da Cidade:  \n");
  fgets(nomeCidade2, 16, stdin); 

  printf("Digite a quantidade da população nesta cidade:  \n");
  scanf("%d", &popCidade2);

  printf("Digite a área em quilômetros quadrados:  \n");
  scanf("%f", &areaCidade2);

  printf("Digite o PIB da cidade:  \n");
  scanf("%f", &pibCidade2);

  printf("Digite a quantidade de pontos turísticos da cidade:  \n");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados de cada carta cadastrada ------------------------------------------

  printf("\n Carta 2 salva com sucesso!\n\n Certo, agora veja os dados das cartas cadastradas!\n\n");
  printf("Carta 1:\n");
  printf("Estado: %s", nomeEstado1);
  printf("Código da Carta: %s\n", codigoCarta1);
  printf("Nome da cidade: %s", nomeCidade1);
  printf("População: %d\n", popCidade1);
  printf("Área: %.2f km²\n", areaCidade1);
  printf("Produto Interno Bruto: R$ %.2f\n", pibCidade1);
  printf("Número de pontos turísticos: %d\n\n", pontosTuristicos1); 

  printf("Carta 2:\n");
  printf("Estado: %s\n", nomeEstado2);
  printf("Código da Carta: %s\n", codigoCarta2);
  printf("Nome da cidade: %s", nomeCidade2);
  printf("População: %d\n", popCidade2);
  printf("Área: %.2f km²\n", areaCidade2);
  printf("Produto Interno Bruto: R$ %.2f\n", pibCidade2);
  printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

return 0;
} 
