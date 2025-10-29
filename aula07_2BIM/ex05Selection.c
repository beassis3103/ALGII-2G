#include <stdio.h>
#include <string.h>

#define TAM (10)

typedef struct{
    int codigo;
    char nome[100];
    int idade;
    int gravidade;
} Paciente;

//Selection
void ordenaPorGravidade(Paciente pacientes[], int tam){
    Paciente temp;
    for(int i = 0; i < tam - 1; i++){
        int min = i;
        for (int j =i+1; j < tam ; j++){
            if(pacientes[j].gravidade > pacientes[min].gravidade){
                min = j;
            }
        }
        if(min != i){
            temp = pacientes[min];
            pacientes[min] = pacientes[i];
            pacientes[i] = temp;
        }
    }
}


void imprimeOrdenado(Paciente pacientes[], int tam){
    for(int i = 0; i < tam - 1; i++){
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