#include <stdio.h>
int main(){
    int idade;
    printf("Qual a sua idade? ");
    scanf("%d", &idade);
    printf("A sua idade eh: %d\n", idade);
    if (idade >= 18){
        // == É sinal de igualdade
        // = É apenas uma atribuição
        printf("Pode beber, pois eh maior de idade.");
    } else {
        printf("Nao pode beber, idade insuficiente. Voce eh menor de idade.");
    }
    return 0;
}


//Alguns sinais em linguagem c:
// = -> Atribuição
// == -> Igualdade
// > -> maior
// < -> menor
// >= -> Maior ou igual
// <= -> Menor ou igual
// != -> Diferente
// && -> And - "E", precisa que um seja verdadeiro
// || -> OR - Um ou outro!