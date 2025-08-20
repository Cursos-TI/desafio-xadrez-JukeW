#include <stdio.h>

int main(){
    // Quantidade de Direção de cada peça
    int i, MOV_BISPO = 5, MOV_TORRE = 5, MOV_RAINHA = 8, MOV_CAVALO = 1;

    // Movimentação do BISPO com While
    printf("=== MOVIMENTAÇÃO DO BISPO ===\n");
    i = 0;
    while(i < MOV_BISPO){ //Execute até o BISPO se mover 5 vezes

        printf("Cima direita\n");
        MOV_BISPO--;

    }


    // Movimentação da TORRE com Do-While
    printf("\n=== MOVIMENTAÇÃO DA TORRE ===\n");
    i = 0;
    do {

        printf("Direita\n");
        MOV_TORRE--;

    } while (i < MOV_TORRE); // Execute até a TORRE se mover 5 vezes

    
    // Movimentação da RAINHA com For
    printf("\n=== MOVIMENTAÇÃO DA RAINHA ===\n");
    for (i = 0; i < MOV_RAINHA; i++){ // Execute até a RAINHA se mover 5 vezes

        printf("Esquerda\n");

    }

    // Movimentação do CAVALO com Loops Aninhados
    printf("\n=== MOVIMENTAÇÃO DO CAVALO ===\n");
    while (MOV_CAVALO--){
        for (int i = 1; i <= 2; i++){ // Imrpime a movimentação vertical 2 vezes
            printf("Baixo\n");
        }
        printf("Esquerda"); // Imprime a movimentação horizontal 1 vez
    }
    
    return 0;
}
