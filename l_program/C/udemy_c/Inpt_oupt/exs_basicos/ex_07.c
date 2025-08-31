//Verificar se um Jogador Pode Jogar - 
//Escreva um programa que solicita ao usuário a idade de um
//jogador e verifica se ele pode jogar na
//categoria Sub-20 (jogadores com 20 anos ou menos). Se for mais velho,
//ele deve jogar na categoria profissional

#include <stdio.h>
int main(){
    int idade;
    printf("Qual a idade do jogador: ");
    scanf("%d", &idade);
    if (idade <= 20){
        printf("Jogador da categoria SUB-20!");
    }
    else{
        printf("Jogador mais velho, categoria profissional");
    }
    return 0;
}