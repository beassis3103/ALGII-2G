#include <stdio.h>

int somaNum(int num){
    if (num == 1){
        return 1;
    } else {
        return num + somaNum(num - 1);
    }
}

int main(){
    int num;

    printf("Digite um número para fazer a soma de todos os números até ele: ");
    scanf("%d", &num);

    int result = somaNum(num);
    printf("Resultado: %d\n", result);
}