#include <stdio.h>


int main() 
{

    int contador = 1;
    printf("Movimentacao Torre\n");
    for (int i = 1; i <= 5; i++) 
    {
        printf("%d Direita\n",i);
    }

    printf("Movimentacao Bispo\n");
    while (contador <=5)
    {   
        printf("%d Cima Direita\n",contador);
        contador++;
    }


    printf("Movimentacao Rainha\n");
    contador = 1;
    while (contador <=8)
    {   
        printf("%d Esquerda\n",contador);
        contador++;
    }
    
    printf("Movimentacao Cavalo\n");
    contador = 1;
    for (int i = 1; i <= 2; i++) 
    {
        printf("%d Baixo\n",i);

        if(i == 2)
        {
            while (contador <=1)
            {
                 printf("%d Esquerda\n",i);
                 contador++;
            }
            
        }
    }
    return 0;
}
