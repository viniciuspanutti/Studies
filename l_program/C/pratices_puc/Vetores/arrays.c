#include <stdio.h>
int main (){
    int notas[5] = {10, 32 , 9, 2 ,3};
    // Onde 10 é o indice zero, por diante...
    //São cinco elementos, a partir do zero, termina no quatro, mas como o zero
    //Também recebe um valor, então são cinco.
    //Vetor para armazenar 5 notas, precisa ser um valore coerente
    //E nunca maior do que precisamos ocupar 
    //Int é o tipo de valores (números inteiros)
    //notas: nome do vetor. Este é o Nome da nossa "Caixa"
    //[5]: Número total de elementos que cabem no vetor
    //Podemos pedir para printar um por um, mas também podemos fazer um loop:
    for (int i = 0; i < 5; i++){ //Agora começa a faze sentido o porque do zero
        printf("%d\n", notas[i]);
    }
    return 0;
}