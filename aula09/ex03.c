#include <stdio.h>

int busca_binaria_recursiva(int v[], int n, int i, int f){
    if( i > f)
        return -1;
    int meio = (i + f)/2;
    if(v[meio] == n)
        return meio;
    if(v[meio] > n)
        return busca_binaria_recursiva(v, n, i, meio - 1);
    else
        return busca_binaria_recursiva(v, n, meio + 1, f);
}

int main(){
    int v[6] = {10,20,30,40,50,60};
    int p = busca_binaria_recursiva(v, 40, 0, 5);
    printf("%d\n", p);
}
