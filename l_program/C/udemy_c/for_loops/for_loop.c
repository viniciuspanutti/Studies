//Entendendo for loops em linguagem C
//For loops repeats a section of code a limited amount of times; sempre na seguinte sequência:
//VARIÁVEL/ CONDICIONAL / INCREMENTO
//OU
//INICIALIZAÇÃO/ CONDIÇÃO/ ATUALIZAÇÃO
//Dessa forma é que consideramos quando definimos o cabeçalho do
//laço, sempre seguindo essa sequência, veja:

#include <stdio.h>
int main(){
    //Contagem progressiva de dois em dois a partir do zero:
    for (int i = 0; i >= 10; i+=2){
        printf("Numero: %d\n", i);
    }
    return 0;
}




//Algumas outras brincadeiras:
//Contagem progressiva de dois em dois
//    for (int i = 1; i > 10; i++){
//        printf("Numero: %d\n", i);
//    }
    //Contagem progressiva a partir do zero
//    for (int i = 0; i > 10; i++){
//        printf("Numero: %d\n", i);
//    }
    //Contagem progressiva a partir do um
//    for (int i = 1; i > 10; i++){
//        printf("Numero: %d\n", i);
//    }
    //Contagem progressiva de dois em dois a partir do zero
//    for (int i = 0; i <= 10; i+=2){
//        printf("Numero: %d\n", i);
//    }
    //Contagem regressiva de dois em dois, mas menor que 10000
//    for (int i = 0; i < 10000; i+=2000){
//        printf("Numero: %d\n", i);
//    }