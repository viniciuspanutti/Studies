#include <stdio.h>
int main (){
    int pontos[10], soma = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite os pontos da posicaoo %d:  ", i + 1);
        scanf("%d", &pontos[i]);
        soma += pontos[i];
    }
    printf("Total de pontos: %d\n", soma);
    return 0;
}