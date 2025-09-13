//Escrevendo sintaxe de uma função em linguagem C
/* tipo_retorno nome_funcao(parametros){
    //bloco de código
    return valor: // Se houver retorno //%d, ou %f, ou %c, ou void }
// Veja como é exatamente igual ao int main, e por isso já estamos usando
E o retorno zero, significa que deu ok na linguagem que era um int, por que ela espera
que retornemos algum valor. */
#include <stdio.h>

int somar(int numero1, int numero2){
    return numero1 + numero2; //pode ser feita de forma direta, ou atribuir valor
    //a variável dentro da funcção
}

int main(){
    //podemos fazer de forma diferente:
    //int resultado = somar(3, 2); //Você precisa passar valore aqui, eles são chamados argumentos
    //printf("Resultado: %d", resultado);
    printf("Resultado: %d\n", somar(3, 2));
    printf("Resultado: %d\n", somar(5, 2));
    printf("Resultado: %d\n", somar(3, 7));
    printf("Resultado: %d\n", somar(3, 12));
    return 0;
}