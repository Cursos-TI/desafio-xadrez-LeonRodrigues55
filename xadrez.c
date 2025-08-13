#include <stdio.h>

//Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); //Chamada recursiva
    }
}

//Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); //Chamada recursiva
    }
}

//Função recursiva para o movimento do Bispo com loops aninhados
void moverBispo(int casas, int i) {
    if (casas > 0) {
        for (int j = 0; j < 1; j++) { //Loop interno para simular o movimento horizontal
            printf("Cima, Direita\n");
        }
        moverBispo(casas - 1, i + 1); //Chamada recursiva
    }
}

//Movimento do Cavalo com loops alinhados com controle
void moverCavalo() {
    int i, j;
    printf("Cavalo moveu quantas casas em L?\n");
    for (i = 0; i < 2; i++) { //Loop externo: move 2 casas para cima
        printf("Cima\n");
        for (j = 0; j < 1; j++) { //Loop interno: move 1 casa para a direita
            if (i == 1) { //Garante que o segundo loop só execute na segunda interação
                printf("Direita\n");
                break; //Sai do loop interno após o movimento da direita
            }
        }
    }
}

int main() {
    //Torre
    printf("Torre moveu quantas casas a direita?\n");
    moverTorre(5);

    //Rainha
    printf("Rainha moveu quantas casas na esquerda?\n");
    moverRainha(8);

    //Bispo
    printf("Bispo moveu quantas casas na diagonal?\n");
    moverBispo(5, 1);

    //Cavalo
    moverCavalo();

    return 0;
}