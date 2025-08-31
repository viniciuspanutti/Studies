//Média de Gols por Partida
//Escreva um programa que receba o número total
//de gols de um jogador e a quantidade de partidas jogadas.
//Depois, calcule e exiba a média de gols por partida.
#include <stdio.h>
int main(){
    float gols, jogos;
    printf("Quantos gols voce fez nessa temporada: ");
    scanf("%f", &gols);
    printf("Quantos jogos voce jogou nessa temporada: ");
    scanf("%f", &jogos);
    float media = gols/jogos;
    printf("O score nessa temporada foram %.2f gols por por jogo", media);
    return 0;
}