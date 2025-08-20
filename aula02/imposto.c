#include <stdio.h>

int main(){
    double salario, imposto, liquido;
    printf("Digite seu salário bruto: ");
    scanf("%lf", &salario);

    if(salario <= 2000){
        printf("Isento\n");

    } else if (salario <= 4000) {
        imposto = (salario * 0.075) ;

    } else if (salario <= 6000) {
        imposto = (salario * 0.15) ;

    } else if (salario <= 10000) {
        imposto = (salario * 0.225) ;

    } else {
        imposto = (salario * 0.275) ;
    }
    liquido = salario - imposto;
    printf("Salário: %2.lf \nImposto: %2.lf \nLíquido: %2.lf\n", salario, imposto, liquido);

    return 0;
}