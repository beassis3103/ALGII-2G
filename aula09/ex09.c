#include <stdio.h>
#include <string.h>

void palindromeRec(char str[], int i, int f){
    if( i >= f){
        return;
    } else if (str[i] != str[f]){
        printf("A palavra/frase não é um palíndromo\n");
        return;
    } else{
        printf("A palavra/frase é um palíndromo\n");
        palindromeRec(str, i + 1, f - 1);
    }
}
int main(){
    char str[100];

    printf("Digite uma palavra ou frase: ");
    fgets(str, sizeof(str - 1), stdin);

    printf("Resultado: \n");
    palindromeRec(str, 0, strlen(str) - 2);

}