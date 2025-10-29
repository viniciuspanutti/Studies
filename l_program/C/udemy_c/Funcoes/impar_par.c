/*Aqui vamos verificar se é par ou impar, Crie uma função
que receba um número inteiro e retorne PAR se for par e Impar se
for impar*/
#include <stdio.h>
int parImpar(int numero){
    if (numero % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (parImpar(num)){
        printf("PAR");
    } else{
        printf("IMPAR");
    }

    return 0;
}