
#include <stdio.h>
void PosicionaNavio(int tabuleiro[10][10],int linha,int coluna)
{
    if(tabuleiro[linha][coluna]  == 3)
    {
           printf("Já possui navio na linha %d e na coluna %d",linha,coluna);  
    }
    else{
        tabuleiro[linha][coluna] = 3;
    }

}

void ImprimeTabuleiro(int tabuleiro[10][10],int linha,int coluna)
{
    
    for (int l = 0; l <=9; l++)
    {
        for (int c = 0; c <=9; c++)
        {
            printf("%d",tabuleiro[l][c]);
        }
        printf("\n");
    }
}

void ImprimeNavioHorizontal(int linha , int tabuleiro[10][10], int navioHorizontal[3])
{
       for (int i = 0; i <=2; i++)
       {
           PosicionaNavio(tabuleiro,linha-1,navioHorizontal[i]-1);
       }

}
void ImprimeNavioVertical(int coluna , int tabuleiro[10][10], int navioVertical[3])
{
       for (int i = 0; i <=2; i++)
       {
            PosicionaNavio(tabuleiro,navioVertical[i]-1,coluna-1);
       }

}
void ImprimeNavioDiagonal(int tabuleiro[10][10],int linhaInicial,int colunaInicial,int tipo)
{
       int contador = 1;

       do
       {
            PosicionaNavio(tabuleiro,linhaInicial-1,colunaInicial-1);
            linhaInicial = linhaInicial + tipo;
            colunaInicial = colunaInicial + tipo;
            contador = contador + 1;
       } while (contador <=3);
      
       

}

int main() 
{

    int tabuleiro[10][10] = 
    {
        {0, 0, 0,0,0,0,0,0,0,0},
        {0, 0, 0,0,0,0,0,0,0,0},
        {0, 0, 0,0,0,0,0,0,0,0},
        {0, 0, 0,0,0,0,0,0,0,0},
        {0, 0, 0,0,0,0,0,0,0,0},
        {0, 0, 0,0,0,0,0,0,0,0},
        {0, 0, 0,0,0,0,0,0,0,0},
        {0, 0, 0,0,0,0,0,0,0,0},
        {0, 0, 0,0,0,0,0,0,0,0},
        {0, 0, 0,0,0,0,0,0,0,0}
     };

     int navioHorizontal[3]  = {2,6,9};
     int navioVertical[3]  = {4,2,10};

     ImprimeNavioHorizontal(2,tabuleiro,navioHorizontal);
     ImprimeNavioVertical(3,tabuleiro,navioVertical);
     ImprimeNavioDiagonal(tabuleiro,6,2,1);
     ImprimeNavioDiagonal(tabuleiro,10,10,-1);
     ImprimeTabuleiro(tabuleiro,10,10);
   

    return 0;
}
