#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero: ");
    // é normal aparecer mal formatado no terminal
    //quando aparece bugado ao adcionar acentos, portanto deixa quieto por enquanto
    //É assim que você captura o que o user pede
    scanf("%d", &numero); 
    //"&" significa que você vai armazenar uma memória na variável, como se fosse uma âncora
    //O valor digitado pelo usuário será armazenado na variável "numero"
    printf("O numero digitado foi: %d\n", numero);//Aqui você está exibindo o
    //valor armazenado na variável "numero", que foi capturado da entrada do usuário
    //Mas o que significa scanf afinal?
    //A função scanf é responsável por ler a entrada
    //do usuário e armazená-la em uma variável.
    //Ela utiliza o formato especificado (neste caso, "%d" para um inteiro)
    //para interpretar a entrada e armazená-la na variável correspondente.
    //Faz o teste se achar interessante, ele vai bugar se você tentar armazenar a entrada
    //numa variável não inteira, ou seja, se você tentar armazenar um número
    //em uma variável do tipo char, por exemplo, vai dar erro.
    return 0;
}