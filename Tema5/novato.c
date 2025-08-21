
#include <stdio.h>


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
           tabuleiro[linha-1][navioHorizontal[i]-1] = 3;
       }

}
void ImprimeNavioVertical(int coluna , int tabuleiro[10][10], int navioVertical[3])
{
       for (int i = 0; i <=2; i++)
       {
           tabuleiro[navioVertical[i]-1][coluna-1] = 3;
       }

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

     ImprimeNavioHorizontal(5,tabuleiro,navioHorizontal);
     ImprimeNavioVertical(6,tabuleiro,navioVertical);
     ImprimeTabuleiro(tabuleiro,10,10);
   

    return 0;
}
