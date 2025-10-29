#include <stdio.h>

void rfunc(int n){
    if( n == 0 ){
        return;
    }
    rfunc(n/2);
    printf("%d", n % 2);

}

int main(){
    int num;
    printf("Digite um número em decimal: ");
    scanf("%d", &num);
    printf("Transformação em binário: ");
    rfunc(num);
    printf("\n");
    return 0;
}