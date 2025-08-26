#include <stdio.h>

int main(){
    int num1 = 10, num2 = 2;

    //Duas variáveis do tipo inteiro
    //printf("Soma: %d + %d = %d", num1, num2, num1 + num2);
    //Aqui você não faz a soma, apenas faz a escrita da string
    // Para poder fazer soma mesmo faremos depois aqui, os valores que colcoaremos
    //dentro dessa %. Adicione na ordem que precisam ser inseridos
    // Mas há uma forma mais fácil:

    int resultado = num1 / num2;

    //printf("A soma %d + %d eh igual a %d", num1, num2, resultado); // para SOMA
    //printf("A subtracao %d - %d eh igual a %d", num1, num2, resultado);// PARA SUBTRÇ
    //printf("A multiplicacao %d * %d eh igual a %d", num1, num2, resultado);//PARA *
    printf("A divisao %d * %d eh igual a %d", num1, num2, resultado);
    // % para módulo -> Resto da divisão num1 % num2;
    // %% para porcentagem -> Para porcentagem num1 %% num2;
    return 0;
}