
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

void CriarHabilidade(int tabuleiro[10][10],int linhaInicial,int colunaInicial,int tipo)
{

    int contador = 0;
    int linha = linhaInicial -1;
    int coluna = colunaInicial -1;
    switch (tipo)
    {
            case 1:
                /* Cone */
                contador = 1;
                do
                {
                
                    if(contador == 1)
                    {
                        tabuleiro[linha][coluna] = 1;
                    }

                    if(contador > 1)
                    {
                        linha = linha +1;
                        for (int i = (coluna - (contador -1)); i <= (coluna +(contador -1)); i++)
                        {
                            tabuleiro[linha][i] = 1;
                        } 
                    }

                    contador = contador + 1;
                
                } while (contador <= 3);
                break;
            case 2:
                   /* cruz */
                contador = 1;
                do
                {
                    if(contador == 1 || contador ==3)
                    {
                        tabuleiro[linha][coluna] = 1;
                    }

                    if(contador == 2)
                    {
                        for (int i = (coluna -  2); i <= (coluna + 2); i++)
                        {
                            tabuleiro[linha][i] = 1;
                        } 
                    }
                    contador = contador + 1;
                    linha = linha +1;
                } while (contador <= 3);
            case 3:
                   /* octaedro */
                    contador = 1;
                    do
                    {
                        if(contador == 1 || contador ==3)
                        {
                            tabuleiro[linha][coluna] = 1;
                        }

                        if(contador == 2)
                        {
                            for (int i = (coluna -  1); i <= (coluna + 1); i++)
                            {
                                tabuleiro[linha][i] = 1;
                            } 
                        }
                        contador = contador + 1;
                        linha = linha +1;
                    } while (contador <= 3);
            default:
                break;
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
     CriarHabilidade(tabuleiro,8,2,3);
     CriarHabilidade(tabuleiro,3,7,2);
     CriarHabilidade(tabuleiro,8,6,2);
     ImprimeTabuleiro(tabuleiro,10,10);
   

    return 0;
}
