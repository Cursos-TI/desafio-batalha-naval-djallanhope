#include <stdio.h>
int main (){

    //identificação do tabuleiro
    char letras [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 
    int tabuleiro [10][10];
    int navio = 3;
    
    //########## CRIAÇÂO DO TABULEIRO ##########
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            tabuleiro [i][j] = 0;
        }
    }
    //########## Navio 1 HORIZONTAL ##########
    tabuleiro [1][4] = navio;
    tabuleiro [2][4] = navio;
    tabuleiro [3][4] = navio;

    //########## Navio 2 VERTICAL ##########
    tabuleiro [9][0] = navio;
    tabuleiro [9][1] = navio;
    tabuleiro [9][2] = navio;

    //########## VISUALIZAÇÃO DO TABULEIRO ##########
    //exibe o cabeçalho (A a J).
    printf("Tabuleiro de batalha naval.\n");
    printf("   ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", letras[i]);
    }
    printf("\n");

    //---------------------------------------------------------------------------------------------------------------------------
    //Exibir posições do tabuleiro
    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1); //imprime a linha de numeros do tabuleiro (1 a 10).

        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}