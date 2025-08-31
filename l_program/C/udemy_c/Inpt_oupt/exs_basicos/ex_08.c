//Avaliar o desempenho do jogador
//Escreva um programa que pede ao usuário a quantidade de gols
//marcados por um jogador em uma temporada e verifica:
//Se fez mais de 10 gols, exibir "Excelente temporada!"
//Se fez entre 5 e 10 gols (inclusive), exibir "Boa temporada!"
//Se fez menos de 5 gols, exibir "Temporada abaixo do esperado."
#include <stdio.h>
int main(){
    int gols_Marcados;
    printf("Qual foi a quantidade de gols marcados pelo Jairzinho: ");
    scanf("%d", &gols_Marcados);
    if (gols_Marcados > 10){
        printf("Jairzinho foi insano!");
    }
    else if (gols_Marcados >= 5){
        printf("Jairzinho foi muito bem");
    }
    else{
        printf("Jairzinho nao representou a camisa");
    }
    return 0;
}