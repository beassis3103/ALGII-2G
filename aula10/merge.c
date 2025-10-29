#include <stdio.h>
#include <string.h>

typedef struct{
    int cod;
    char nome[100];
    int qtd;
    double valor;
} Pedido;

void mergeSort(Pedido pedidos[], int esq, int dir){
    if(esq < dir){
        int meio = esq + (dir - esq) / 2;
        mergeSort(pedidos, esq, meio);
        mergeSort(pedidos, meio + 1, dir);
        merge(pedidos, esq, meio, dir);   
    }
}

void merge(Pedido pedidos[], int esq, int m, int dir){
    int n1 = m - esq + 1;
    int n2 = dir - m;
    Pedido ESQ[n1], DIR[n2];
    for(int i = 0; i < n1; i++)
        ESQ[i] = pedidos[esq + i];
    for(int j = 0; j < n2; j++)
        DIR[j] = pedidos[m + 1 + j];

    int i = 0, j = 0, k = esq;

     while(i < n1 && j < n2){
        if (ESQ[i].valor >= DIR[j].valor){
            pedidos[k++] = ESQ[i++];
        } else{
            pedidos[k++] = DIR[j++];
        }
    }
    while(i < n1){
        pedidos[k++] = ESQ[i++];
    }
    while(j < n2){
        pedidos[k++] = DIR[j++];
    }

}

void imprimePedidos(Pedido pedidos[]){
    printf("Pedidos ordenados por valor total (maior para menor):\n");
    for(int i = 0; i < 5; i++){
        printf("Pedido %d: %s | Quantidade: %d | Valor Total: %.2f\n", pedidos[i].cod, pedidos[i].nome, pedidos[i].qtd, pedidos[i].valor);
    }
}

int main(){
    Pedido pedidos[12] = {
 {1001, "Maria Silva", 3, 450.75},
 {1002, "João Pereira", 1, 120.00},
 {1003, "Fernanda Costa", 5, 799.90},
 {1004, "Carlos Eduardo", 2, 310.50},
 {1005, "Beatriz Almeida", 4, 625.20},
 {1006, "Rafael Tavares", 6, 950.00},
 {1007, "Patrícia Gomes", 2, 299.99},
 {1008, "Luciana Ribeiro", 1, 150.00},
 {1009, "Bruno Fernandes", 3, 480.00},
 {1010, "Camila Andrade", 4, 699.90},
 {1011, "Thiago Souza", 7, 1120.00},
 {1012, "Juliana Rocha", 2, 350.30}
};

mergeSort(pedidos, 0, 11);
imprimePedidos(pedidos);

}