//Diferença de Salários entre Jogadores
//Peça ao usuário os salários de dois jogadores de futebol e mostre a diferença entre eles.


#include <stdio.h>
#include <math.h> 
int main(){
    float jogadorUm, jogadorDois;
    printf("Digite o seu salario do jogador um:\n");
    scanf("%f", &jogadorUm);
    printf("Digite o seu salario do jogador dois:\n");
    scanf("%f", &jogadorDois);
    float diferenca = fabs(jogadorUm - jogadorDois);
    printf("A diferenca salarial entre eles eh de: %.2f", diferenca);
    return 0;
}