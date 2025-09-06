//Faça um programa para receber um número inteiro representando segundos e imprimir a quantidade
//correspondente em horas, minutos e segundos. Dica:
//A quantidade de minutos de uma certa quantidade de segundos é a parte inteira da
//divisão segundos/60.
//O resto dessa divisão será a quantidade de segundos que não totalizou minuto (menos que 60s).
//Da mesma forma. A quantidade de horas de uma certa quantidade de minutos
//corresponde à parte inteira da divisão minutos/60.
//O resto dessa divisão será a quantidade de minutos que não totalizou hora (menos que 60min).
#include <stdio.h>
int main(){
    int tempo;
    printf("Digite um número de segundos: ");
    scanf("%d", &tempo);
    int hrs = tempo/60;
    int min = ((int)tempo) % 60;
    int seg = ((int)hrs) % 60;
    printf("%d horas,\n%d minutos, \n%d segundos \n", hrs, min, seg);
    return 0;
}