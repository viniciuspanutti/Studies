// Soma dos Números de 1 a n ->
//O usuário digita um número n,
//e o programa calcula a soma de todos
//os números de 1 até n.


#include <stdio.h>
int main(){
    int n, i;
    printf("Digite um numero para ser somado do 1 ate esse numero: ");
    scanf("%d", &n);
    for (i = 1; i <= n ; i++){
        printf("%d + %d = %d\n", i, n, i + n);
    }
    return 0;
}

//A soma de 1 até n eh: 
//(cálculo 1+2+3+4+5)