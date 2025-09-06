//2) Elabore um programa que leia vários números, até o usuário digitar 0.
//O programa deverá imprimir, quantos
//números foram lidos, qual é o maior e o menor.
// Dica:
// Seu código deverá ter:
// Um contador (para armazenar a quantidade de números digitados.
// Um int que represente o máximo e outro que represente o mínimo.
// Em cada número digitado, deve-se incrementar o contador e comparar o
//máximo e mínimo com o número digitado e atualizá-los caso necessário
#include <stdio.h>
#include <stdbool.h>
int main() {
    int num;
    int count = 1;
    int maior = -99999;
    int menor = 999999;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while (num != 0){
        if (num < menor){
            menor = num;
        }
        if (num > maior){
            maior = num;
        }
        printf("Digite outro numero: ");
        scanf("%d", &num);
        count ++;
    }
    printf("Maior numero = %d\n", maior);
    printf("Menor numero = %d\n", menor);
    printf("%d", count);
    return 0;
}