#include <stdio.h>
#include <cstring>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, populacao, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a funcao scanf para capturar as entradas do usuário para cada atributo.
    //Solicite ao usuário que insira as informações de cada cidade, como o código, nome, populacao, área, etc.
    
    // Exibicao dos Dados das Cartas:
    //Sugestão: Utilize a funcao printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    //Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
     char estado1[2];
     char codigoCarta1[5];

     char nomeCidade1[255];
     unsigned long int populacao1;
     float areaKmQuadrados1;
     float pib1;
     int quantidadePontosTuristicos1;
     float densidadePopulacional1;
     float pibPerCapita1;
     float superpoder1;

     char estado2[2];
     char codigoCarta2[5];
     char nomeCidade2[255];
     unsigned long int populacao2;
     float areaKmQuadrados2;
     float pib2;
     int quantidadePontosTuristicos2;
     float densidadePopulacional2;
     float pibPerCapita2;
     float superpoder2;

     char resultadoComparacao[50];

     printf("Digite o estado da 1 carta:");
     scanf("%s", estado1);
     printf("Digite o código da 1 carta:");
     scanf("%s", codigoCarta1);
     printf("Digite o nome da cidade da 1 carta:");
     scanf("%s", nomeCidade1);
     printf("Digite a populacao da 1 carta:");
     scanf("%u", &populacao1);
     printf("Digite a área em KM2 da 1 carta:");
     scanf("%f", &areaKmQuadrados1);
     printf("Digite o pib da cidade da 1 carta:");
     scanf("%f", &pib1);
     printf("Digite a quantidade de pontos turisticos da 1 carta:");
     scanf("%d", &quantidadePontosTuristicos1);

 
     
    //dados da segunda cartaS
    // printf("\n");
     printf("Digite o estado da 2 carta:");
     scanf("%s", estado2);
     printf("Digite o código da 2 carta:");
     scanf("%s", codigoCarta2);
     printf("Digite o nome da cidade da 2 carta:");
     scanf("%s", nomeCidade2);
     printf("Digite a populacao da 2 carta:");
     scanf("%u", &populacao2);
     printf("Digite a área em KM2 da 2 carta:");
     scanf("%f", &areaKmQuadrados2);
     printf("Digite o pib da cidade da 2 carta:");
     scanf("%f", &pib2);
     printf("Digite a quantidade de pontos turisticos da 2 carta:");
     scanf("%d", &quantidadePontosTuristicos2);

     //impressão em tela

     densidadePopulacional1 = populacao1/areaKmQuadrados1;
     densidadePopulacional2 = populacao2/areaKmQuadrados2;

     pibPerCapita1 = pib1/populacao1;
     pibPerCapita2 = pib2/populacao2;


     superpoder1 = populacao1 + areaKmQuadrados1 + pib1 + quantidadePontosTuristicos1 + pibPerCapita1 ;
     superpoder2 =  populacao2 + areaKmQuadrados2 + pib2 + quantidadePontosTuristicos2 + pibPerCapita2;


      // somando todos os atributos numéricos (populacao, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a 


     if(populacao1 > populacao2)
     {
         strcpy(resultadoComparacao, "Carta 1 Venceu");
     }
     else{
         strcpy(resultadoComparacao, "Carta 2 Venceu");
     }
     printf("Populacao: %s \n", resultadoComparacao);

     if(areaKmQuadrados1 > areaKmQuadrados2)
     {
         strcpy(resultadoComparacao, "Carta 1 Venceu");
     }
     else{
        strcpy(resultadoComparacao, "Carta 2 Venceu");
     }
     printf("Area KM2: %s \n", resultadoComparacao);

     if(pib1 > pib2)
     {
         strcpy(resultadoComparacao, "Carta 1 Venceu");
     }
     else{
        strcpy(resultadoComparacao, "Carta 2 Venceu");
     }

     printf("Pib: %s \n", resultadoComparacao);

     if(quantidadePontosTuristicos1 > quantidadePontosTuristicos2)
     {
         strcpy(resultadoComparacao, "Carta 1 Venceu");
     }
     else{
        strcpy(resultadoComparacao, "Carta 2 Venceu");
     }
     printf("Quantidade pontos turisticos: %s \n", resultadoComparacao);

     if(densidadePopulacional1 > densidadePopulacional2)
     {
         strcpy(resultadoComparacao, "Carta 1 Venceu");
     }
     else{
        strcpy(resultadoComparacao, "Carta 2 Venceu");
     }
     printf("Densidade Populacional: %s \n", resultadoComparacao);
    
     if(pibPerCapita1 > pibPerCapita2)
     {
         strcpy(resultadoComparacao, "Carta 1 Venceu");
     }
     else{
        strcpy(resultadoComparacao, "Carta 2 Venceu");
     }
     printf("PIB per Capita: %s \n", resultadoComparacao);

     if(superpoder1 > superpoder2 || densidadePopulacional1 < densidadePopulacional2)
     {
         strcpy(resultadoComparacao, "Carta 1 Venceu");
     }
     else{
        strcpy(resultadoComparacao, "Carta 2 Venceu");
     }

     printf("Super Poder: %s \n", resultadoComparacao);
     return 0;
}
