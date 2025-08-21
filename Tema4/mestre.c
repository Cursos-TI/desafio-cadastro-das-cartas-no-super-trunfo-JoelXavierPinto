#include <stdio.h>


void MovimentacaoTorre(int quantidadeInicial,int quantidadeMaxima)
{
    if(quantidadeInicial <=quantidadeMaxima)
    {
        printf("%d Direita\n",quantidadeInicial);
        MovimentacaoTorre(quantidadeInicial+1,quantidadeMaxima);
    }
}
void MovimentacaoBispo(int quantidadeInicial,int quantidadeMaxima)
{
    if(quantidadeInicial <=quantidadeMaxima)
    {
        printf("%d Cima Direita\n",quantidadeInicial);
        MovimentacaoBispo(quantidadeInicial+1,quantidadeMaxima);
    }
}
void MovimentacaoRainha(int quantidadeInicial,int quantidadeMaxima)
{
    if(quantidadeInicial <=quantidadeMaxima)
    {
        printf("%d Esquerda\n",quantidadeInicial);
        MovimentacaoRainha(quantidadeInicial+1,quantidadeMaxima);
    }
}
int main() 
{

    int contador = 1;
    printf("Movimentacao Torre\n");
    MovimentacaoTorre(1,5);

    printf("Movimentacao Bispo\n");
    MovimentacaoBispo(1,5);

    printf("Movimentacao Rainha\n");
    MovimentacaoRainha(1,8);

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
