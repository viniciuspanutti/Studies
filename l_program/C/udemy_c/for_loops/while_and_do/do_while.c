#include <stdio.h>
int main(){
    int senha;
    do {
        printf("Digite a senha correta (1234): ");
        scanf("%d", &senha);
        //bloco de código
    } while (senha != 1234);
    printf("Acesso liberado!\n");
    return 0;
}