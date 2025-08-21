#include <stdio.h>


int main() {

    

     char nomePais1[255];
     int populacao1;
     float areaKmQuadrados1;
     float pib1;
     int quantidadePontosTuristicos1;
     float densidadePopulacional1;
     float pibPerCapita1;


     char nomePais2[255];
     int populacao2;
     float areaKmQuadrados2;
     float pib2;
     int quantidadePontosTuristicos2;
     float densidadePopulacional2;
     float pibPerCapita2;
     int opcaoEscolhida1;
     int opcaoEscolhida2;
    //dados da primeira carta


     printf("Digite o nome do pais da 1 carta:");
     scanf("%s", nomePais1);
     printf("Digite a populacao da 1 carta:");
     scanf("%d", &populacao1);
     printf("Digite a area em KM2 da 1 carta:");
     scanf("%f", &areaKmQuadrados1);
     printf("Digite o pib da cidade da 1 carta:");
     scanf("%f", &pib1);
     printf("Digite a quantidade de pontos turisticos da 1 carta:");
     scanf("%d", &quantidadePontosTuristicos1);

 
     
    //dados da segunda carta


     printf("Digite o nome do pais da 2 carta:");
     scanf("%s", nomePais2);
     printf("Digite a populacao da 2 carta:");
     scanf("%d", &populacao2);
     printf("Digite a area em KM2 da 2 carta:");
     scanf("%f", &areaKmQuadrados2);
     printf("Digite o pib da cidade da 2 carta:");
     scanf("%f", &pib2);
     printf("Digite a quantidade de pontos turisticos da 2 carta:");
     scanf("%d", &quantidadePontosTuristicos2);

  

     densidadePopulacional1 = populacao1/areaKmQuadrados1;
     densidadePopulacional2 = populacao2/areaKmQuadrados2;
     printf("\n");
     printf("\n");
    //menu 
    printf("Escolha a 1 opcao de comparacao entre os paises: \n");
    printf("1 Populacao \n");
    printf("2 Area \n");
    printf("3 Pib \n");
    printf("4 Pontos Turisticos \n");
    printf("5 Densidade Populacional \n");
    scanf("%d", &opcaoEscolhida1);

     printf("\n");
    //menu 
    printf("Escolha a 2 opcao de comparacao entre os paises: \n");
    opcaoEscolhida1 != 1 ? printf("1 Populacao \n") : printf("");
    opcaoEscolhida1 != 2 ? printf("2 Area \n"):printf("");
    opcaoEscolhida1 != 3 ? printf("3 Pib \n"):printf("");
    opcaoEscolhida1 != 4 ? printf("4 Pontos Turisticos \n"):printf("");
    opcaoEscolhida1 != 5 ? printf("5 Densidade Populacional \n"):printf("");
    scanf("%d", &opcaoEscolhida2);
    

    if(opcaoEscolhida1 == opcaoEscolhida2)
    {
         printf("Você não pode escolher a mesma opção de comparação!");
         return 0;
    }

    if(opcaoEscolhida1 >5 || opcaoEscolhida2 >5)
    {
         printf("Opção inválida!");
         return 0;
    }

    switch (opcaoEscolhida1)
    {
        case 1:
            printf("Atributo usado para 1 comparacao é a Populacao \n"); 
            printf("Populacao Pais %s  e de %d \n",nomePais1,populacao1);
            printf("Populacao Pais %s  e de %d \n",nomePais2,populacao2);
            if(populacao1 > populacao2 )
            {
                  printf("Carta Pais %s venceu! \n",nomePais1);
            }
            else
            {
                if(populacao2 > populacao1)
                {
                    printf("Carta Pais %s venceu! \n",nomePais2); 
                }
                else
                {
                     printf("Empate! \n"); 
                }
            }
            break;
        case 2:
            printf("Atributo usado para    1 comparacao é a Area \n");
            printf("Area Pais %s  e de %f \n",nomePais1,areaKmQuadrados1);
            printf("Area Pais %s  e de %f \n",nomePais2,areaKmQuadrados2);
            if(areaKmQuadrados1 > areaKmQuadrados2 )
            {
                  printf("Carta Pais %s venceu! \n",nomePais1);
            }
            else
            {
                if(areaKmQuadrados2 > areaKmQuadrados1)
                {
                    printf("Carta Pais %s venceu! \n",nomePais2); 
                }
                else
                {
                     printf("Empate!\n"); 
                }
            }
            break;
        case 3:
            printf("Atributo usado para  1 comparacao é a Pib \n");
            printf("Pib Pais %s  e de %f \n",nomePais1,pib1);
            printf("Pib Pais %s  e de %f \n",nomePais2,pib1);
            if(pib1 > pib2 )
            {
                  printf("Carta Pais %s venceu! \n",nomePais1);
            }
            else
            {
                if(pib2 > pib1)
                {
                    printf("Carta Pais %s venceu! \n",nomePais2); 
                }
                else
                {
                     printf("Empate!\n"); 
                }
            }
            break;
            
        case 4:
            printf("Atributo usado para  1 comparacao é a quantidade pontos turisticos \n");
            printf("Quantidade pontos turisticos do  %s  e de %d \n",nomePais1,quantidadePontosTuristicos1);
            printf("Quantidade pontos turisticos do %s  e de %d \n",nomePais2,quantidadePontosTuristicos2);
            if(quantidadePontosTuristicos1 > quantidadePontosTuristicos2 )
            {
                  printf("Carta Pais %s venceu! \n",nomePais1);
            }
            else
            {
                if(quantidadePontosTuristicos2 > quantidadePontosTuristicos1)
                {
                    printf("Carta Pais %s venceu! \n",nomePais2); 
                }
                else
                {
                     printf("Empate!\n"); 
                }
            }
            break;  
        case 5:
            printf("Atributo usado para  1 comparacao é a Densidade Populacional \n");
            printf("Densidade Populacional do %s  e de %f \n",nomePais1,densidadePopulacional1);
            printf("Densidade Populacional do  %s  e de %f \n",nomePais2,densidadePopulacional2);
            if(densidadePopulacional1 < densidadePopulacional2 )
            {
                  printf("Carta Pais %s venceu! \n",nomePais1);
            }
            else
            {
                if(densidadePopulacional2 < densidadePopulacional1)
                {
                    printf("Carta Pais %s venceu! \n",nomePais2); 
                }
                else
                {
                     printf("Empate! \n"); 
                }
            }
            break;  
        default:
            printf("Opcao invalida \n");
            break;
     }


     switch (opcaoEscolhida2)
    {
        case 1:
            printf("Atributo usado para 2 comparacao é a Populacao \n"); 
            printf("Populacao Pais %s  e de %d \n",nomePais1,populacao1);
            printf("Populacao Pais %s  e de %d \n",nomePais2,populacao2);
            if(populacao1 > populacao2 )
            {
                  printf("Carta Pais %s venceu! \n",nomePais1);
            }
            else
            {
                if(populacao2 > populacao1)
                {
                    printf("Carta Pais %s venceu! \n",nomePais2); 
                }
                else
                {
                     printf("Empate! \n"); 
                }
            }
            break;
        case 2:
            printf("Atributo usado para 2 comparacao é a Area \n");
            printf("Area Pais %s  e de %f \n",nomePais1,areaKmQuadrados1);
            printf("Area Pais %s  e de %f \n",nomePais2,areaKmQuadrados2);
            if(areaKmQuadrados1 > areaKmQuadrados2 )
            {
                  printf("Carta Pais %s venceu! \n",nomePais1);
            }
            else
            {
                if(areaKmQuadrados2 > areaKmQuadrados1)
                {
                    printf("Carta Pais %s venceu! \n",nomePais2); 
                }
                else
                {
                     printf("Empate! \n"); 
                }
            }
            break;
        case 3:
            printf("Atributo usado para  2 comparacao é a Pib \n");
            printf("Pib Pais %s  e de %f \n",nomePais1,pib1);
            printf("Pib Pais %s  e de %f \n",nomePais2,pib1);
            if(pib1 > pib2 )
            {
                  printf("Carta Pais %s venceu! \n",nomePais1);
            }
            else
            {
                if(pib2 > pib1)
                {
                    printf("Carta Pais %s venceu! \n",nomePais2); 
                }
                else
                {
                     printf("Empate! \n"); 
                }
            }
            break;
            
        case 4:
            printf("Atributo usado para  2 comparacao é a quantidade pontos turisticos \n");
            printf("Quantidade pontos turisticos do  %s  e de %d \n",nomePais1,quantidadePontosTuristicos1);
            printf("Quantidade pontos turisticos do %s  e de %d \n",nomePais2,quantidadePontosTuristicos2);
            if(quantidadePontosTuristicos1 > quantidadePontosTuristicos2 )
            {
                  printf("Carta Pais %s venceu! \n",nomePais1);
            }
            else
            {
                if(quantidadePontosTuristicos2 > quantidadePontosTuristicos1)
                {
                    printf("Carta Pais %s venceu! \n",nomePais2); 
                }
                else
                {
                     printf("Empate!"); 
                }
            }
            break;  
        case 5:
            printf("Atributo usado para  2 comparacao é a Densidade Populacional \n");
            printf("Densidade Populacional do %s  e de %f \n",nomePais1,densidadePopulacional1);
            printf("Densidade Populacional do  %s  e de %f \n",nomePais2,densidadePopulacional2);
            if(densidadePopulacional1 < densidadePopulacional2 )
            {
                  printf("Carta Pais %s venceu! \n",nomePais1);
            }
            else
            {
                if(densidadePopulacional2 < densidadePopulacional1)
                {
                    printf("Carta Pais %s venceu! \n",nomePais2); 
                }
                else
                {
                     printf("Empate! \n"); 
                }
            }
            break;  
        default:
            printf("Opcao invalida \n");
            break;
     }




     return 0;
}
