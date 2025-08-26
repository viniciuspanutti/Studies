//Como declarar variáveis e usar tipos de dados diferentes na prática:

#include <stdio.h>
int main(){
    int numero = 10;
    float numeroQuebrado = 50.49;

    printf("Numero: %d \n", numero); //Porcentagem é como se tivesse criando um buraco dentro da string,
    //onde podemos colocar o valor da variável (int número, nesse caso).
    //Então após o "%", colocaremos o tipo de dado que estaremos recebendo, que é "d"
    //que vem de decimal, ou "i" de inteiro - mas o melhor constuma ser %d para inteiros
    //depois colocamos a variável que queremos colocar: o int número
    //para colocar uma quebra de linha coloca um \n para fazer quebra de linha
    printf("Flutuante: %.2f \n", numeroQuebrado); //f de float
    //Para colocar com duas casas decimais coloca .2antes de f
    char letra = 'A';
    printf("Letra: %c \n", letra); //A não é uma string quando é apenas um caractere,
    //É apenas uma forma diferente de receber dados //%c de char
    //Essa forma char é apenas para UM caractere.
    //Mas e se tivermos mais de um? Fazemos o seguinte:
    char nome[20] = "Vinícius"; // É preciso sempre usar um carctere a mais do que a string tem
    //Por que é preciso dessa string?
    //
    printf("nome: %s \n", nome); //%s de string
    return 0;
}


//Portanto, resumindo:
//int, float, char, string_char[];
//Apenas memorize que existem dois tipos de char:
//char (um único caractere) e um array de char (string) em C.
//Toda string que você fizer precisa ser armazenada em um array de char.
//Toda string é, na verdade, um array de char.
//Mas nem toda array de char é uma string.
//Pois array pode ser usado para armazenar outros tipos de dados também.
//Como por exemplo: um array de inteiros, como:
//int numeros[5] = {1, 2, 3, 4, 5}; // Isso é um array de inteiros, mas não é
//uma string. Tendeu?
//Esses serão os tipos de daos que usaremos em nossa linguagem c
