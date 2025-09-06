/* Triângulo de Números - Escreva um programa que exiba um triângulo numérico com
N linhas, onde cada linha tem os números de 1 até a posição atual (N)
Exemplo de N = 5:
1
​1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include <stdio.h>
int main(){
    int N;

    printf("Digite um numero para n:  ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= i; j++){ //Deve estar atrelado ao índice i, diferente do N, pois J é coluna
            printf("%d ", j); // O que repete é o valor de j
        }
        printf("\n");
    }

    return 0;
}