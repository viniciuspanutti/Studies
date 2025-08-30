#include <stdio.h>
//Faremos desenho de asteriscos par ao número ao quadrado que a pessoa escolher.
//Usaremos alinhamento de for
int main(){
    int n;
    printf("Digite um numero para o tamanho do quadrado: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++){ // usamos n em condição, POIS será relativo ao que o usuário escolher
        //Para cada uma linha que o usuário digitou, faremos outro loop:
        for (int j=0; j<n; j++){
            printf("* ");
        }
        printf("\n"); //Isso aqui faz pular a linha, após completa e reiniciar nova coluna
    }
}