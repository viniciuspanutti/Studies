#include <stdio.h>

#define MAX_LIVROS 100
#define MAX_EMPRESTIMOS 10

struct Pessoa{
    char nome[40];
    long CPF;
};

struct Livro{
    char titulos[60];
    char autor[50];
    int ano_publicado;
    int id;
    int qnt_disponivel;
    struct Pessoa emprestimos[MAX_EMPRESTIMOS];
};

struct Biblioteca{
    struct Livro Livros[MAX_LIVROS];
    int total_livros;
};


void cadastrar(struct Biblioteca *biblioteca ){
    if(biblioteca->total_livros >= MAX_LIVROS){
        printf("Limite de livros atingidos");
    }

    struct Livro novo_livro;
    //printf cadastrar novo livro
    //printfs varias vezes &novo_livro.[struct Livro -> X]
    //
}

void consulta(){}
void emprestimo(){}
void devolucao(){}
void remocao(){}
//encerrar fica apenas no main, em um default em switch case


int main(){

    return 0;
}