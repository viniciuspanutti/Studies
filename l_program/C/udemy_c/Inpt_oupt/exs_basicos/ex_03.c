//Conversão de Minutos para Tempo de Jogo
//Peça ao usuário para digitar o tempo jogado em minutos. Depois,
//converta esse valor para horas e minutos e exiba o resultado.

#include <stdio.h>
int main(){
    float tempJogo;
    printf("Qual foi o tempo jogado em minutos: ");
    scanf("%f", &tempJogo);
    int horas = tempJogo/60;
    int minutos = ((int)tempJogo) % 60;
    printf("O tempo jogado total foi de %f, que foram %d horas e %d minutos\n", tempJogo, horas, minutos);
    return 0;
}