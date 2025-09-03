#include <stdio.h>
//Quais momentos são melhores em cada caso? if else ou switch case?
int main(){
    int opcao = 8;
    switch (opcao){
        case 1:    //Caso o valor da opçao seja 1
            printf("Fase numero 1");
            break;        
        case 2: 
            printf("Fase numero 2");
            break;
        case 3: 
            printf("Fase numero 3");
            break;
        case 4:
            printf("Fase numero 4");
            break;
        default:
            printf("Opcao invalida!");
    }
    return 0;
}