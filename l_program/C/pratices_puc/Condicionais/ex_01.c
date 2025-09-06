//Escreva um programa em C que leia a idade e o peso de uma pessoa.
//O programa deve dizer se ela está apta a doar sangue. Regras:
//A idade deve estar entre 16 e 69 anos.
//O peso deve ser maior ou igual a 50 kg.
#include <stdio.h>
int main(){
    int idade;
    float peso;
    printf("Digite a sua idade:\n ");
    scanf("%d", &idade);
    printf("Digite o seu peso em Kg:\n ");
    scanf("%f", &peso);
    if (idade >= 16 && idade <= 69 && peso >= 50) { //Todas as condições precisam ser verdadeiras
        printf("Apto para doar sangue!\n");
    } else {
        printf("Nao apto para doar sangue.\n");
    }
    return 0;
}