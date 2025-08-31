//Classificação do jogador baseada em idade e desempenho ->
//Escreva um programa que solicita ao usuário:
//A idade do jogador.
//A quantidade de gols marcados.
//O programa deve classificar o jogador nas seguintes categorias:
//✅ Se tem até 20 anos e fez mais de 10 gols: "Jovem talento promissor!"
//✅ Se tem até 20 anos e fez 10 gols ou menos: "Jovem em desenvolvimento."
//✅ Se tem mais de 20 anos e fez mais de 15 gols: "Jogador experiente em grande fase!"
//✅ Se tem mais de 20 anos e fez 15 gols ou menos: "Jogador mediano"
#include <stdio.h>
int main(){
    int jogador, gols;
    printf("Qual a idade do jogador: ");
    scanf("%d", &jogador);
    printf("Qual a quantidade de gols marcados nessa temporada: ");
    scanf("%d", &gols);
    if (jogador <= 20 && gols > 10){
        printf("Jovem talento promissor!");
    }
    if (jogador <=20 && gols <= 10){
        printf("Jovem em desenvolvimento.");
    }
    if (jogador > 20 && gols > 15){
        printf("Jogador experiente em grande fase!");
    }
    if (jogador > 20 && gols <= 15){
        printf("Jogador mediano");
    }
    return 0;
}