#include <stdio.h>

int fatorialRec(int n){
    if (n == 0){
        return 1;
    } else {
        return n * fatorialRec(n-1);
    }
}

int main(){
    int num;
    printf("Insira um número para saber seu fatorial: ");
    scanf("%d", &num);

    int result = fatorialRec(num);
    printf("%d!: %d\n", num, result);

    return 0;
}