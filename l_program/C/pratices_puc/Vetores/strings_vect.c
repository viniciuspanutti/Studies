//Como fazemos um vetor de strings?
#include <stdio.h>
int main (){
    char xablau[3][20] = {"Xablau", "Vinicius", "Vini"};
    //char xablau[20] = "xablau"; Mas isso não era vetor? Como que agora será strings?
        //Assim como está acima:
    //printf ("%s", xablau); Isso aqui printa a minha string
    printf("%s", xablau[0]); //Isso aqui printa apenas o primeiro elemento da minha string
    return 0;
}