#include <stdio.h>
#include <stdlib.h>
//Convertendo string para inteiros e float e fazendo as contas = Atoi
int main(){
    char texto[] = "123";
    int valor = atoi(texto); //Ou atof se for flutuante
    printf("Numero aleatorio gerado: %d\n", valor + 2); 
    return 0;
}