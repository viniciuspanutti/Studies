/*
Soma dos Números de 1 a n ->
O usuário digita um número n,
e o programa calcula a soma de todos
os números de 1 até n. 
Saída esperada:
Se o usuário digitar 5:
A soma de 1 ate 5 eh: 15
(Cálculo: 1 + 2 + 3 + 4 + 5 = 15)
*/

#include <stdio.h>
int main(){
    //O usuário digita um número n
    int n, soma = 0;
    printf("Digite um numero para ser somado ate ele mesmo:\n");
    scanf("%d", &n);
    //programa calcula a soma de todos os números de 1 até n
    for (int i = 1; i <= n; i++){
        soma = soma + i;
    }
    printf("A soma de 1 ate %d eh de: %d", n, soma);
    return 0;
}

//A soma de 1 até n eh: 
//(cálculo 1+2+3+4+5)