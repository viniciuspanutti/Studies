/*Os números primos possuem várias aplicações dentro da
Computação,como por exemplo na Criptografia.
Um número primo é aquele que é divisível apenas por 1 e por ele mesmo.
Faça um programa que peça um número inteiro e determine
se ele é ou não um número primo. Dica:
o Um número é primo até que se prove o contrário!
o É recomendado utilizar um flag “bool eh_primo = true” e se não for primo se
torna false. Assim dá para saber no código posterior ao loop se é ou não primo.
o Utilize um loop que vai de 2 a (num_digitado – 1) e teste se o resto
da divisão num_digitado por i é zero.
o Se for zero está provado que não é primo. Faz (eh_primo = false) e já
pode parar o loop.
o Se chegar ao final do loop sem ter sido provado que não é primo, significa
que é primo (eh_primo continua true).
*/
#include <stdio.h>
#include <stdbool.h>
int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num / 1 == num && num / num == num){
        printf("Eis ai um numero primo");
    } else{
        printf("tente novamente");
    }
    return 0;
}


/*
#include <stdio.h>
#include <stdbool.h>
int main() {
    int nmr;
    bool eh_primo = true;
    printf("Digite um numero: ");
    scanf("%d", &nmr);
    
    for (int i = 2; i < nmr; i++){
        if ((nmr % i) == 0){
            eh_primo = false;
        }
    }
    
    if (eh_primo == true){
        printf("Valor é primo!");
    }
    else{
        printf("Não é primo");
    }
    return 0;
*/