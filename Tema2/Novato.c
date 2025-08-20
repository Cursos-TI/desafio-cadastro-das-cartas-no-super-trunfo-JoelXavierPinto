#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentarios para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variaveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, area, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuario para cada atributo.
    //Solicite ao usuario que insira as informações de cada cidade, como o código, nome, população, area, etc.
    
    // Exibição dos Dados das Cartas:
    //Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    //Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
     char estado1[2];
     char codigoCarta1[5];

     char nomeCidade1[255];
     int populacao1;
     float areaKmQuadrados1;
     float pib1;
     int quantidadePontosTuristicos1;
     
     char estado2[2];
     char codigoCarta2[5];
     char nomeCidade2[255];
     int populacao2;
     float areaKmQuadrados2;
     float pib2;
     int quantidadePontosTuristicos2;

     printf("Digite o estado da 1 carta:");
     scanf("%s", estado1);
     printf("Digite o codigo da 1 carta:");
     scanf("%s", codigoCarta1);
     printf("Digite o nome da cidade da 1 carta:");
     scanf("%s", nomeCidade1);
     printf("Digite a populacao da 1 carta:");
     scanf("%d", &populacao1);
     printf("Digite a area em KM2 da 1 carta:");
     scanf("%f", &areaKmQuadrados1);
     printf("Digite o pib da cidade da 1 carta:");
     scanf("%f", &pib1);
     printf("Digite a quantidade de pontos turisticos da 1 carta:");
     scanf("%d", &quantidadePontosTuristicos1);

 
     
    //dados da segunda cartaS
    // printf("\n");
     printf("Digite o estado da 2 carta:");
     scanf("%s", estado2);
     printf("Digite o codigo da 2 carta:");
     scanf("%s", codigoCarta2);
     printf("Digite o nome da cidade da 2 carta:");
     scanf("%s", nomeCidade2);
     printf("Digite a populacao da 2 carta:");
     scanf("%d", &populacao2);
     printf("Digite a area em KM2 da 2 carta:");
     scanf("%f", &areaKmQuadrados2);
     printf("Digite o pib da cidade da 2 carta:");
     scanf("%f", &pib2);
     printf("Digite a quantidade de pontos turisticos da 2 carta:");
     scanf("%d", &quantidadePontosTuristicos2);

     //impressão em tela

     
     printf("Você informou os seguintes dados para 1 carta: \n");
     printf("Estado: %s \n", estado1);
     printf("Código: %s \n", codigoCarta1);
     printf("Nome: %s \n", nomeCidade1);
     printf("População: %d \n", populacao1);
     printf("Area KM2: %f \n", areaKmQuadrados1);
     printf("Pib: %f \n", pib1);
     printf("Quantidade pontos turisticos: %d \n", quantidadePontosTuristicos1);
     printf("\n");

     printf("Você informou os seguintes dados para 2 carta: \n");
     printf("Estado: %s \n", estado2);
     printf("Código:  %s \n", codigoCarta2);
     printf("Nome: %s \n", nomeCidade2);
     printf("População: %d \n", populacao2);
     printf("Area KM2: %f \n", areaKmQuadrados2);
     printf("Pib: %f \n", pib2);
     printf("Quantidade pontos turisticos: %d \n", quantidadePontosTuristicos2);
     return 0;
}
