//Escreva um programa que leia uma nota de 0 a 10 e mostre a classificação:
//Menor que 5 → “Insuficiente”.
//De 5 até 6.9 → “Regular”.
//De 7 até 8.9 → “Bom”.
//9 ou mais → “Excelente”
#include <stdio.h>
int main(){
    float nota;
    printf("Digite a sua nota: ");
    scanf("%f", &nota);
    if (nota >= 9){
        printf("Excelente!");
    }
    if (nota >= 7 && nota < 8.9){
        printf("Nota muito boa!");
    }
    if (nota >= 5 && nota < 6.9){
        printf("Nota mediana");
    }
    if (nota < 5){
        printf("Abaixo da media");
    }
    return 0;
}