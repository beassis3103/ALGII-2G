#include <stdio.h>

int potencia(int base, int expoente){
    int resultado = 1;

    for(int i =1 ; i <= expoente; i++){
        resultado *= base;
    }
    return resultado;
}

int main(){
    int base, expoente;

    printf("Digite o valor da base: ");
    scanf("%d", &base);

    printf("Digite o valor do expoente: ");
    scanf("%d", &expoente);
   
   int pot = potencia(base, expoente);

   printf("Resultado: %d", pot);

}