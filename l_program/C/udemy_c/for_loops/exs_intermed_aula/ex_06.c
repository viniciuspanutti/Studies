/*Triângulo invertido de números -> 
Crie um programa que imprima um triângulo invertido de números.*/
#include <stdio.h>
int main(){
    int num;

    printf("Digite um numero para contagem do triangulo: ");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}