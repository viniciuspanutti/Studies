#include <stdio.h>
//Ateção as trocas de atualização dentro do cabeçalho:
//INICIALIZAÇÃO/ CONDIÇÃO/ #ATUALIZAÇÃO#
//POis podem ser positivos, negativos, ou inteiros += ou -=
int main(){
    printf("Contagem regressiva para a exterminacao total: \n");
    for (int i = 10; i >= 1; i--){
        printf("%d...\n", i);
    }
    printf("Zero\n##BOOM!##\n");
    return 0;
}