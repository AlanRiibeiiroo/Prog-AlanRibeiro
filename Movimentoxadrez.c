#include <stdio.h>

int main() {

    int movimentoTorre = 0;
    int movimentoBispo = 0;
    int movimentoRainha = 0;
    int movimentoCavalo = 1;

    // Movimento Torre while
    printf("Movimento TORRE \n");
        while (movimentoTorre < 5)
        {
            printf("Frente \n");
            movimentoTorre++;
        }
            printf("\n");

    // Movimento Bispo do-while
    printf("Movimento BISPO\n");
        do
        {
            printf("Cima, Direita \n");
            movimentoBispo++;
        } while (movimentoBispo < 5);
            printf("\n");
    
    // Movimento Rainha for
    printf("Movimento RAINHA \n");
        for ( int movimentoRainha = 0; movimentoRainha < 8; movimentoRainha++)
        {
            printf("Esquerda\n");
        }
            printf("\n");
        
    // Movimento do Cavalo Loops Alinhados
    printf("Movimento Cavalo \n");
    while (movimentoCavalo--)
    {
        for ( int i = 0; i < 2; i++){
            printf("Cima\n");
        }
            printf("Direita\n");
        }

    return 0;
}