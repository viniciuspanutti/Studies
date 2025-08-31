//Apresentação do Jogador
//Crie um programa que peça o primeiro nome de um jogador,
//sua idade e a quantidade de gols que ele já fez na carreira.
//Em seguida, exiba essas informações na tela.

#include <stdio.h>
int main(){
    char nome[20];
    int idade, gols;
    printf("Digite seu primeiro nome: ");
    scanf("%19s", nome); //
    printf("\nDigite a sua idade: ");
    scanf("%d", &idade);
    printf("\nDigite a quantidade de gols na sua carreira: ");
    scanf("%d", &gols);
    printf("Seu nome é %s, voce tem %d anos e %d gols na carreira", nome, idade, gols);
    return 0;
}