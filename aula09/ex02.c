/*
Recebe um número e calcula o Fibonacci deste, usando recursão.
*/

#include <stdio.h>

int fib(int n){
    if( n < 2)
        return n;
    
        return fib(n-1) + fib(n-2);
}

int main(){
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Resultado: %d", fib(n));
}