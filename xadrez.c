#include <stdio.h>

// A cada chamada, imprime "Direita" e chama novamente até mov chegar a 0
void moverTorre(int mov){
    if (mov > 0){
        printf("Direita\n");
        moverTorre(mov - 1);
    }
}

void moverBispo(int mov){
    if (mov > 0){
        // Loops aninhados: vertical (externo) e horizontal (interno)
        for (int v = 0; v < 1; v++) {         // Move 1 vez na vertical
            for (int h = 0; h < 1; h++) {     // Move 1 vez na horizontal
                printf("Cima - Direita\n");
            }
        }

        // Chama recursivamente para continuar o movimento
        moverBispo(mov - 1);
    }
}

// A cada chamada, imprime "Esquerda" e chama novamente até mov chegar a 0
void moverRainha(int mov){
    if (mov > 0){
        printf("Esquerda\n");
        moverRainha(mov - 1);
    }
}

void moverCavalo(int mov){
    for (int passo = 0; passo < mov; passo++){  // Cada movimento do cavalo

        // Movimento vertical (2 casas para cima)
        for (int v = 1; v <= 2; v++){
            if (v == 0) continue; // Exemplo de uso de continue
            printf("Cima\n");

            if (v > 2) break; // (nunca vai acontecer, mas mostra o uso de break)
        }

        // Movimento horizontal (1 casa para direita)
        for (int h = 0; h < 2; h++){
            if (h == 0) continue; // Pula a primeira iteração
            printf("Direita\n");
        }
    }
}


int main(){
    // Quantidade de Direção de cada peça
    int i, MOV_BISPO = 5, MOV_TORRE = 5, MOV_RAINHA = 8, MOV_CAVALO = 1;

    // Movimentação do BISPO com Recursividade
    printf("\n=== MOVIMENTAÇÃO DA BISPO ===\n");
    moverBispo(MOV_BISPO);

    // Movimentação da TORRE com Recursividade
    printf("\n=== MOVIMENTAÇÃO DA TORRE ===\n");    
    moverTorre(MOV_TORRE);
    
    // Movimentação da RAINHA com Recursividade
    printf("\n=== MOVIMENTAÇÃO DA RAINHA ===\n");
    moverRainha(MOV_RAINHA);

    // Movimentação do CAVALO com Recursividade
    printf("\n=== MOVIMENTAÇÃO DO CAVALO ===\n");
    moverCavalo(MOV_CAVALO);   

    
    return 0;
}
