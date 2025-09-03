//Escreva um programa que leia três valores inteiros representando lados
//de um triângulo. O programa deve dizer se esses valores podem formar um triângulo, ou não.
//o Condição: Um triângulo só é válido se a soma de dois lados
//for maior que o terceiro, para os três lados.
#include <stdio.h>
int main(){
    int lado1, lado2, lado3;
    printf("Digite um lado inteiro para o triangulo: ");
    scanf("%d", &lado1);

    printf("Digite um lado inteiro para o triangulo: ");
    scanf("%d", &lado2);

    printf("Digite mais um lado inteiro para o triangulo: ");
    scanf("%d", &lado3);

    if (lado1 + lado2 > lado3 &&
        lado2 + lado3 > lado1 &&
        lado3 + lado1 > lado2){
        printf("Seu lados sao validos para foramra o triangulo!");
    }
    else {
        printf("Lados invalidos para formar o triangulo");
    }
    return 0;
}