/* Tabuada:
Escreva um programa que recebe um número inteiro do usuário e imprime
a tabuada desse número de 0 a 10.*/
#include <stdio.h>
int main(){
    int num, tabuada;
    printf("Digite um numero: ");
    scanf("%d", &num);
    //imprime a tabuada desse número de 0 a 10
    for (int i = 0; i <= 10; i++){
        tabuada = num * i; //Resultado multiplicacao
        printf("%d + %d = %d\n", num, i, tabuada);
    }
    return 0;
}