/*<stdlib.h> - Utilidades gerais:
- rand() - nmr aleatorio
- srand() - inicializa o gerador com uma semente (para aquele espaço de tempo),
por isso usamos o include <time.h>
- atoi(), atof() - convete string para int e float
- exit() - encerra o programa
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL)); //pseudoaleatóio, não é realmente aleatório pois isso não tem como
    int numero = rand() % 100; // entre 0 e 99
    printf("Numero aleatorio gerado: %d\n", numero); 
    return 0;
}