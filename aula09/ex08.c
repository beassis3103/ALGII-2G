#include <stdio.h>

int contarDigitos(int n){
    if(n == 0){
        return 0;
    }
    return 1 + contarDigitos(n / 10);
}

int main(){
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    int resultado = contarDigitos(num);
    printf("Número de dígitos: %d\n", resultado);

    return 0;
}