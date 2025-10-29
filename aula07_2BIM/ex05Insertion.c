#include <stdio.h>
#include <string.h>

#define TAM (10)

typedef struct {
    int codigo;
    char nome[100];
    int idade;
    int gravidade;
} Paciente;

//Insertion
void ordenaPorGravidade(Paciente pacientes[], int n){
    for(int i = 0; i < n; i ++){
        Paciente key = pacientes[i];
        int j = i -1;

        while(j >= 0 && pacientes[j].gravidade < key.gravidade){
            pacientes[j + 1] = pacientes[j];
            j --;
        }
        pacientes[j + 1] = key;
    }
}



void imprimeOrdenado(Paciente pacientes[], int n){
    for(int i = 0; i < n - 1; i ++){
    printf("%d  |   %s  |   %d  |   %d\n", pacientes[i].codigo, pacientes[i].nome, pacientes[i].idade, pacientes[i].gravidade);
}
}

int main(){
    Paciente pacientes[TAM] = {
 {101, "Ana Paula", 45, 85},
 {102, "Carlos Eduardo", 60, 92},
 {103, "Fernanda Lima", 33, 76},
 {104, "João Marcos", 70, 98},
 {105, "Luciana Alves", 55, 88},
 {106, "Bruno Rocha", 40, 69},
 {107, "Marta Silva", 28, 58},
 {108, "Rafael Tavares", 38, 73},
 {109, "Juliana Costa", 49, 91},
 {110, "Roberto Teixeira",65, 94}
};
    ordenaPorGravidade(pacientes, TAM);
    imprimeOrdenado(pacientes, TAM);
    return 0;
}