//Calculando o Aproveitamento de um Time -> 
//Crie um programa que peça o número de vitórias, empates e derrotas de um time.
//Depois, calcule o número total de pontos, seguindo a regra:
//Vitória = 3 pontos
//Empate = 1 ponto
//Derrota = 0 pontos
#include <stdio.h>
int main(){
    int vitorias, derrotas, empates;
    printf("\nQuantas vitorias seu time tem: ");
    scanf("%d", &vitorias); 
    printf("\nQuantas derrotas seu time tem: ");
    scanf("%d", &derrotas);
    printf("\nQuantas empates seu time tem: ");
    scanf("%d", &empates);
    //int pontos = (vitorias * 3) + empates; é a forma mais intelgente de fazer
    int total_v = vitorias*3;
    int total_e = empates*1;
    int total_point = total_v+total_e;
    printf("O numero total de pontos do seu time e de %d: \n", total_point);
    return 0;
}