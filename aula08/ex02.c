/*

Função de regressão que acha o MDC de dois números.

*/
#include <stdio.h>

int rfunc(int a, int b){
    if(b == 0)                  //O limite é b = 0 porque quando b é 0 o mdc de a e 0 da a.
        return a;
    return rfunc(b, a % b);      
    
}

int main(){
    int n1,
        n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    int mdc = rfunc(n1,n2);

    printf("O MDC de %d e %d é: %d\n", n1, n2, mdc);
}