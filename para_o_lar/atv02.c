#include <stdio.h>

int minutos(int horas, int minutos){
    int hr_min = horas * 60;
    int conversao = hr_min + minutos;

    return conversao;
}

int diferenca (int min1, int min2){
    int dif =  min1 - min2;

    if (dif < 0){
        dif *= -1;
    }

    return dif;
}

int main(){
    int hora1, hora2, min1, min2;

    printf("Digite o primeiro horário: ");
    scanf("%d:%d", &hora1, &min1);

    int hr_min1 = minutos(hora1, min1);

    printf("Digite o segundo horário: ");
    scanf("%d:%d", &hora2, &min2);

    int hr_min2 = minutos(hora2, min2);

    int diff = diferenca(hr_min1, hr_min2);

    printf("Diferença entre os horários (em min): %d\n", diff);

}