#include <stdio.h>
#include <string.h>

void inverterStringRec(char str[], int i, int f){
    char temp;
    if(i >= f){
        return;
    }
    temp = str[i];
    str[i] = str[f];
    str[f] = temp;
    inverterStringRec(str, i + 1, f - 1);
}

int main(){
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str - 1), stdin);

    inverterStringRec(str, 0, strlen(str) - 1);

    printf("String invertida: %s\n", str);

    return 0;
}