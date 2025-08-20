#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num;

    srand(time(NULL));
    int jogo = rand() % 4;

    printf("Selecione: \n1 - Pedra \n2 - Papel \n3 - Tesoura\n");
    scanf("%d", &num);

    printf("O computador escolheu %d.\n", jogo);

    if(num == 1 && jogo == 3){
        printf("Usuário venceu o jogo!\n");

    } else if (num == 3 && jogo == 2){
         printf("Usuário venceu o jogo!\n");

    } else if (num == 2 && jogo == 1){
         printf("Usuário venceu o jogo!\n");

    } else if (num == jogo){
        printf("Empate!\n");

    } else {
        printf("Computador venceu o jogo!\n");
    }


    return 0;
}