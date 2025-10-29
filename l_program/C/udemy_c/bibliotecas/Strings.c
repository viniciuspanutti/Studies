/*<string.h> - Manipulação de strings
Principais funções:
strlen() - Tamanho String //Util para loops ao iterear a strings e descobrir
quantas delas são vogais, por exemplo
strcpy() - copia uma str
strcmp() - compara strings
strcat() - concatena strings
*/

#include <stdio.h>
#include <string.h>

int main(){
    char nome[] = "Joao";
    char sobrenome[] = " Silva";
    strcat(nome, sobrenome); // Concatena as duas strings
    printf("Nome completo: %s\n", nome);

    //Add uma verificaçãozinha básica
    if (strcmp(nome, "JoaoSilva") == 0){
        printf("Nome comparado correto!\n");
    }else{
        printf("Nome comparado incorreto!\n");
    }
    return 0;
}