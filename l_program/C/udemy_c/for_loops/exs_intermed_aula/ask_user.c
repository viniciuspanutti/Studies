#include <stdio.h>

int main(){
    int tabuada;
    printf("Digite uma tabuada do zero ao dez: ");
    scanf("%d", &tabuada);
    if (tabuada < 0 && tabuada > 10){
        printf("Número rejeitado. Somente entre o 1 e o 10");
    }
    else{
        printf("Tabuada %d", tabuada);
        for (int i=0; i<=10; i++){
            printf("%d x %d = %d\n", tabuada, i, tabuada * i);
        }
    }
}

//Fazer um que o usuário possa pedir a tabuada que quiser
//Fazer um que o usuário possa testar se estão certas suas tabuadas de cabeça e na ponta da língua