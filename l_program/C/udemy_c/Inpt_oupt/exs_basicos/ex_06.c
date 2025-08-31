//Verificação de Cartão Vermelho
//Um jogador recebe cartão vermelho se receber 2 cartões amarelos no jogo.
//Escreva um programa que verifica se um jogador será expulso, baseado na
//quantidade de cartões amarelos.
#include <stdio.h>
int main(){
    int ctAmarelo;
    printf("Quantos cartoes amarelos o jogador recebeu: ");
    scanf("%d", &ctAmarelo);
    if(ctAmarelo < 2){
        printf("Segue o jogo");
    }
    else{
        printf("Jogador expulso");
    }
    return 0;
}