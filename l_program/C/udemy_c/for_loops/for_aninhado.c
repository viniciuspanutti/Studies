#include <stdio.h>
//Faremos um mini-jogo verificação da megasena
int main(){ //Criaremos uma tabuada, pois repetiremos a mesma equação várias vezes,
    //Só mudando o segundo número da tabuada. E isso é possível dentro de um loop. Veja:
    //Mas queremos fazer TODAS AS TABUADAS
    for (int i=0; i<=10; i++){
        printf("\n=====================\n");
        printf("\nTabuada do %d\n", i);
        for (int j=0; j<=10; j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
    return 0;
}