/* Números Pares de 1 a n - 
O usuário digita um número n, e o programa imprime
todos os números pares de 1 até n.
Saída esperada (se o usuário digitar 10):
*/
#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    //o programa imprime todos os números pares de 1 até n
    //Seria possivel também desconsidearar o if e usar apenas:
    //for (int i = 0; i <= num; i+=2) pois de dois em dois a partir do zero,
    //nunca encontraremos valore diferentes de numeros pares
    for (int i = 0; i <= num; i++){
        if (i % 2 == 0){
            printf("%d, ", i);  
        }
    }
    return 0;
}