#include <stdio.h>
 
int main() {
    int torre = 1, bispo = 1, rainha = 1, cavalo = 1;
  //Torre 
    printf("Torre moveu quantas casas a direita?\n");
    while (torre <= 5 )
    {
        printf("Direita\n", torre);
        torre++;
    }
  //bispo
   printf("Bispo moveu quantas casas na diagonal?\n");
    do {
        printf("Cima, Direita\n", bispo);
        bispo++;
    } while (bispo <= 5);
  //Rainha
   printf("Rainha moveu quantas casas na esquerda?\n");
    for (rainha = 1; rainha <= 8; rainha++){ 
        printf("esquerda\n", rainha);
    }
  //Cavalo
   printf("Cavalo moveu quantas casas em L?\n");
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    while (cavalo <= 1) {
        printf("Esquerda\n");
        cavalo++;
    }

    return 0;
}