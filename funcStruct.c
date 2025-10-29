#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    char cargo[30];
    float salario;
} Funcionario;

void lerFuncionario(Funcionario funcionarios[], int n){
    fflush(stdin);
    for(int i = 0; i < n; i++){
        printf("Funcionário %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", &funcionarios[i].nome);
        //fgets(funcionarios[i].nome, sizeof(funcionarios[i].nome), stdin);

        printf("Cargo: ");
        scanf("%s", &funcionarios[i].cargo);
        //fgets(funcionarios[i].cargo, sizeof(funcionarios[i].cargo), stdin);

        printf("Salário: ");
        scanf("%f", &funcionarios[i].salario);
        }
}

void imprimeFuncionario(Funcionario funcionarios[], int n){
    printf("Funcionários ordenados: \n");
    for(int i = 0; i < n; i++){
        printf("Funcionário %d: ", i+1);
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Cargo: %s\n", funcionarios[i].cargo);
        printf("Salário: %.2f\n", funcionarios[i].salario);
    }

}

float calculaMedia(Funcionario funcionarios[], int n){
    float soma = 0;
    for(int i = 0; i < n; i++){
        soma += funcionarios[i].salario;
    }
    float media = soma/n;

    return media;
}

int indiceMaiorSalario(Funcionario funcionarios[], int n){
    int maior = 0;
    for(int i = 0; i < n; i++){
        if(funcionarios[i].salario > funcionarios[maior].salario){
            maior = i;
        }
    }
    
    return maior;
}

void ordenaPorNome(Funcionario funcionarios[], int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(funcionarios[j].nome, funcionarios[j+1].nome) > 0) {
                Funcionario temp = funcionarios[j];
                funcionarios[j] = funcionarios[j+1];
                funcionarios[j+1] = temp;
            }
        }
    }
}

int main(){
    fflush(stdin);

    int qtd = 0;
    printf("Digite a quantidade de funcionários: ");
    scanf("%d", &qtd);

    Funcionario funcionarios[qtd];

    //int tam = sizeof(funcionarios[0].salario);

    lerFuncionario(funcionarios, qtd);
    ordenaPorNome(funcionarios, qtd );
    imprimeFuncionario(funcionarios, qtd);
    printf("Índice do maior salário: %d\n", indiceMaiorSalario(funcionarios, qtd));
    printf("Média dos salários: %.2f\n", calculaMedia(funcionarios, qtd));

    return 0;
}

