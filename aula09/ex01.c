/*
Recebe dois números e retorna o mdc usando recursão.
*/

#include <stdio.h>

int frec(int a, int b){
    if( b > a){
        return frec(b, a);
    }
    if(b == 0){
        return a;
    }
    return frec(b, a%b);
}

int main(){
    int a,b;
    printf("Digite o primerio número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("MDC: %d", frec(a , b));

return 0;
}