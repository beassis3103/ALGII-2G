#include <stdio.h>

int somaNum(int n){
    if(n < 10){
        return n;
    }

    return (n % 10) + somaNum(n / 10);
}

int main(){
    int num;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    printf("A soma dos dígitos de %d é: %d\n\n", num, somaNum(num));
}