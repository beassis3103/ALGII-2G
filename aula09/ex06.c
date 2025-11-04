#include <stdio.h>

int fibonacciRec(int n){
    if(n == 0){
        return 0;
    } else if (n == 1){
        return 1;
    } else {
        return fibonacciRec(n - 1) + fibonacciRec(n - 2);
    }
}

int main(){
    int num;

    printf("Digite um número para calcular a sequência de fibonacci: ");
    scanf("%d", &num);

    int result = fibonacciRec(num);
    printf("Resultado: %d\n", result);
}