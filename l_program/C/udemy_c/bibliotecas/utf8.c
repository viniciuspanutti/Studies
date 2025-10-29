//A questão da incomatibilidade dos acentos
/*Em inglês não há esses tipos de acentos como no pt-br, ent
de forma geral, a lingaguem c não le esses caracteres especiais,
eles ent precisam ser incluidos e pra isso usamos biblioteca. Como?
No terminal:
chcp 65001
Que vai ativar o utf8, e no código segue da seguinte forma:
*/
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    printf("Coração\n");
    return 0;
}    
