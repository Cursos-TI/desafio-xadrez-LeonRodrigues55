#include <stdio.h>
 
int main() {
  //Peças do tabuleiro
    int torre = 1, bispo = 1, rainha = 1;
  //Torre 
    printf("Torre moveu quantas casas a direita?\n");
    while (torre <= 5 )
    {
        printf("%d\n", torre);
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
        printf("%d\n", rainha);
    }

    return 0;
}