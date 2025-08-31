//Classificação do nível da partida com base na quantidade de torcedores
//escreva um programa que solicita ao usuário: A capacidade total do estádio.
//A quantidade de torcedores presentes no jogo. Com base na taxa de ocupação do estádio,
//o programa deve classificar a partida da seguinte forma:
//✅ Se o estádio estiver com mais de 90% da capacidade ocupada: "Lotado!"
//✅ Se estiver entre 70% e 90% (inclusive): "Ótima presença de público!"
//✅ Se estiver entre 50% e 70% (inclusive): "Público razoável."
//✅ Se estiver abaixo de 50%: "Morumbis"
#include <stdio.h>
int main(){
    int capacidadeTotal, quantidadeTorcedores;
    printf("Qual a capacidade total do estadio: ");
    scanf("%d", &capacidadeTotal);
    printf("Qual a quantidade de tocedores presentes: ");
    scanf("%d", &quantidadeTorcedores);
    float ocupacao = (float)quantidadeTorcedores / capacidadeTotal * 100; 
    if (ocupacao > 90){
        printf("Lotado!");
    }
    else if (ocupacao >= 70){
        printf("Ótima presença de público");
    }
    else if (ocupacao >=50) {
        printf("público razoável");
    }
    else {
        printf("Tá Vazio!");
    }
    return 0;
}