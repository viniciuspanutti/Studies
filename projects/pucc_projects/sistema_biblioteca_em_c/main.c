#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 100 
#define MAX_EXEMPLARES 10
#define MAX_NOME_LEN 40
#define MAX_TITULO_LEN 60
#define MAX_AUTOR_LEN 50

struct Pessoa {
    char nome[MAX_NOME_LEN];
    long CPF;
};

struct Livro {
    char titulo[MAX_TITULO_LEN]; 
    char autor[MAX_AUTOR_LEN]; 
    int ano_publicacao; 
    int id; // Código único
    int qnt_disponivel; 
    struct Pessoa emprestimos[MAX_EXEMPLARES]; 
    int contador_emprestimos; 
};


struct Biblioteca {
    struct Livro Livros[MAX_LIVROS]; // Vetor de livros 
    int total_livros; // Contador de cadastrados
};

//Funções

void exibir_menu();
int buscar_livro_por_id(struct Biblioteca *biblioteca, int id);
int pessoa_ja_emprestou(struct Livro *livro, long cpf);
void inicializar_biblioteca(struct Biblioteca *biblioteca);

//Funções do Menu
void cadastrar_livro(struct Biblioteca *biblioteca);
void consultar_livros(struct Biblioteca *biblioteca);
void realizar_emprestimo(struct Biblioteca *biblioteca);
void realizar_devolucao(struct Biblioteca *biblioteca);
void remover_livro(struct Biblioteca *biblioteca);

void inicializar_biblioteca(struct Biblioteca *biblioteca) {
    biblioteca->total_livros = 0;
}

int buscar_livro_por_id(struct Biblioteca *biblioteca, int id) {
    for (int i = 0; i < biblioteca->total_livros; i++) {
        if (biblioteca->Livros[i].id == id) {
            return i;
        }
    }
    return -1;
}


int pessoa_ja_emprestou(struct Livro *livro, long cpf) {
    for (int i = 0; i < livro->contador_emprestimos; i++) {
        if (livro->emprestimos[i].CPF == cpf) {
            return 1;
        }
    }
    return 0;
}


void cadastrar_livro(struct Biblioteca *biblioteca) {
    // 1. Verificar limite de livros
    if (biblioteca->total_livros >= MAX_LIVROS) {
        printf("\nLimite de livros atingido (%d livros cadastrados). Nao e possivel cadastrar mais.\n", MAX_LIVROS);
        return;
    }

    struct Livro novo_livro;
    int id_temporario, indice_existente;
    int num_exemplares;

    printf("\n--- Cadastro de Novo Livro ---\n");

    // 2. Coletar dados do livro
    printf("Título: ");
    scanf(" %[^\n]", novo_livro.titulo);
    printf("Autor: ");
    scanf(" %[^\n]", novo_livro.autor);
    printf("Ano de Publicacao: ");
    scanf("%d", &novo_livro.ano_publicacao);

    do {
        printf("Codigo Unico (ID): ");
        if (scanf("%d", &id_temporario) != 1) {
            printf("Entrada invalida para o ID. Tente novamente.\n");
            while (getchar() != '\n');
            continue;
        }
        indice_existente = buscar_livro_por_id(biblioteca, id_temporario);
        if (indice_existente != -1) {
            printf("⚠️ ID ja existente! Livro: %s. Por favor, insira um ID diferente.\n", biblioteca->Livros[indice_existente].titulo);
        }
    } while (indice_existente != -1);
    novo_livro.id = id_temporario;

    // 4. Coletar e validar Quantidade de Exemplares
    do {
        printf("Quantidade de exemplares a adicionar (maximo %d): ", MAX_EXEMPLARES);
        if (scanf("%d", &num_exemplares) != 1 || num_exemplares <= 0 || num_exemplares > MAX_EXEMPLARES) {
            printf("Entrada invalida. A quantidade deve ser entre 1 e %d. Tente novamente.\n", MAX_EXEMPLARES);
            while (getchar() != '\n');
        } else {
            break;
        }
    } while (1);

    // 5. Inicializar campos
    novo_livro.qnt_disponivel = num_exemplares; 
    novo_livro.contador_emprestimos = 0;

    biblioteca->Livros[biblioteca->total_livros] = novo_livro;
    biblioteca->total_livros++;

    printf("\nLivro \"%s\" cadastrado com sucesso! ID: %d. Exemplares: %d.\n", novo_livro.titulo, novo_livro.id, novo_livro.qnt_disponivel);
}

void imprimir_livro(struct Livro *livro) {
    printf("\n  --- Livro ID: %d ---\n", livro->id);
    printf("  Título: %s\n", livro->titulo);
    printf("  Autor: %s\n", livro->autor);
    printf("  Ano de Publicacao: %d\n", livro->ano_publicacao);
    printf("  Quantidade Disponivel: %d\n", livro->qnt_disponivel);
    printf("  Emprestado para (%d): ", livro->contador_emprestimos);

    if (livro->contador_emprestimos > 0) {
        for (int i = 0; i < livro->contador_emprestimos; i++) {
            printf("%s (CPF: %ld)%s", livro->emprestimos[i].nome, livro->emprestimos[i].CPF, (i == livro->contador_emprestimos - 1) ? "" : "; ");
        }
        printf("\n");
    } else {
        printf("Ninguem.\n");
    }
}

void consultar_livros(struct Biblioteca *biblioteca) {
    int opcao;
    printf("\n--- Consulta de Livros ---\n");
    printf("1. Listar todos os livros cadastrados\n"); 
    printf("2. Buscar um livro especifico por ID\n"); 
    printf("Escolha uma opcao: ");
    if (scanf("%d", &opcao) != 1) {
        printf("Entrada invalida. Retornando ao menu principal.\n");
        while (getchar() != '\n');
        return;
    }

    if (opcao == 1) {
        // Listar todos os livros
        if (biblioteca->total_livros == 0) {
            printf("\nNao ha livros cadastrados na biblioteca.\n");
            return;
        }
        printf("\n--- Lista de Todos os Livros (%d no total) ---\n", biblioteca->total_livros);
        for (int i = 0; i < biblioteca->total_livros; i++) {
            imprimir_livro(&biblioteca->Livros[i]);
            printf("--------------------------------\n");
        }
    } else if (opcao == 2) {
        // Buscar por ID
        int id_busca, indice;
        printf("Digite o ID do livro que deseja buscar: ");
        if (scanf("%d", &id_busca) != 1) {
            printf("Entrada invalida. Retornando ao menu principal.\n");
            while (getchar() != '\n');
            return;
        }

        indice = buscar_livro_por_id(biblioteca, id_busca);
        if (indice != -1) {
            imprimir_livro(&biblioteca->Livros[indice]);
        } else {
            printf("\nLivro com ID %d nao encontrado.\n", id_busca);
        }
    } else {
        printf("\nOpcao invalida.\n");
    }
}


void realizar_emprestimo(struct Biblioteca *biblioteca) {
    int id_emprestimo, indice;
    struct Pessoa pessoa_emprestimo;

    printf("\n--- Emprestimo de Livro ---\n");
    printf("Digite o ID do livro que deseja emprestar: ");
    if (scanf("%d", &id_emprestimo) != 1) {
        printf("Entrada invalida. Retornando ao menu.\n");
        while (getchar() != '\n');
        return;
    }

    indice = buscar_livro_por_id(biblioteca, id_emprestimo);
    if (indice == -1) {
        printf("\nLivro com ID %d nao encontrado.\n", id_emprestimo);
        return;
    }

    // 1. Verificar disponibilidade
    if (biblioteca->Livros[indice].qnt_disponivel <= 0) {
        printf("\nATENCAO: O livro \"%s\" nao possui exemplares disponiveis para emprestimo (Quantidade: 0).\n", biblioteca->Livros[indice].titulo);
        return;
    }

    // 2. Coletar dados da pessoa
    printf("Digite o seu nome: ");
    scanf(" %[^\n]", pessoa_emprestimo.nome);
    printf("Digite o seu CPF (apenas numeros): ");
    if (scanf("%ld", &pessoa_emprestimo.CPF) != 1) {
        printf("Entrada invalida para o CPF. Emprestimo cancelado.\n");
        while (getchar() != '\n');
        return;
    }

    // 3. Verificar se a pessoa já emprestou o livro 
    if (pessoa_ja_emprestou(&biblioteca->Livros[indice], pessoa_emprestimo.CPF)) {
        printf("\nO(A) %s (CPF: %ld) ja possui um exemplar do livro \"%s\" emprestado.\n", pessoa_emprestimo.nome, pessoa_emprestimo.CPF, biblioteca->Livros[indice].titulo);
        printf("Uma mesma pessoa nao pode emprestar dois exemplares do mesmo livro.\n");
        return;
    }

    // 4. Registrar empréstimo
    int contador = biblioteca->Livros[indice].contador_emprestimos;
    if (contador < MAX_EXEMPLARES) {
        // Adicionar pessoa ao vetor de pessoas que emprestaram
        biblioteca->Livros[indice].emprestimos[contador] = pessoa_emprestimo;
        biblioteca->Livros[indice].contador_emprestimos++;
        // Atualizar quantidade disponível
        biblioteca->Livros[indice].qnt_disponivel--;

        printf("\nEmprestimo de \"%s\" para %s realizado com sucesso!\n", biblioteca->Livros[indice].titulo, pessoa_emprestimo.nome);
        printf("   Exemplares disponiveis restantes: %d.\n", biblioteca->Livros[indice].qnt_disponivel);
    } else {
        // Isso não deve acontecer se a qnt_disponivel for verificada corretamente
        printf("\nErro interno: Limite de emprestimos atingido, mas a disponibilidade nao foi checada corretamente.\n");
    }
}


void realizar_devolucao(struct Biblioteca *biblioteca) {
    int id_devolucao, indice_livro;
    long cpf_devolucao;
    int indice_pessoa = -1;

    printf("\n--- Devolucao de Livro ---\n");
    printf("Digite o ID do livro que esta sendo devolvido: ");
    if (scanf("%d", &id_devolucao) != 1) {
        printf("Entrada invalida. Retornando ao menu.\n");
        while (getchar() != '\n');
        return;
    }

    indice_livro = buscar_livro_por_id(biblioteca, id_devolucao);
    if (indice_livro == -1) {
        printf("\nLivro com ID %d nao encontrado.\n", id_devolucao);
        return;
    }

    printf("Digite o CPF (apenas numeros) da pessoa que esta devolvendo: ");
    if (scanf("%ld", &cpf_devolucao) != 1) {
        printf("Entrada invalida para o CPF. Devolucao cancelada.\n");
        while (getchar() != '\n');
        return;
    }

    struct Livro *livro = &biblioteca->Livros[indice_livro];

    // 1. Buscar a pessoa no vetor de empréstimos
    for (int i = 0; i < livro->contador_emprestimos; i++) {
        if (livro->emprestimos[i].CPF == cpf_devolucao) {
            indice_pessoa = i;
            break;
        }
    }

    if (indice_pessoa == -1) {
        printf("\nErro: Nao foi encontrado um emprestimo do livro \"%s\" para o CPF %ld.\n", livro->titulo, cpf_devolucao);
        return;
    }

    // 2. Remover a pessoa do vetor de empréstimos 
    // Mover os elementos seguintes para cobrir o espaço da pessoa removida
    char nome_pessoa[MAX_NOME_LEN];
    strcpy(nome_pessoa, livro->emprestimos[indice_pessoa].nome);

    for (int i = indice_pessoa; i < livro->contador_emprestimos - 1; i++) {
        livro->emprestimos[i] = livro->emprestimos[i + 1];
    }
    livro->contador_emprestimos--;

    // 3. Atualizar quantidade disponível 
    if (livro->qnt_disponivel < MAX_EXEMPLARES) {
        livro->qnt_disponivel++;
    } else {
        printf("\nATENCAO: A quantidade disponivel ja esta no maximo (%d).\n", MAX_EXEMPLARES);
    }

    printf("\nDevolucao do livro \"%s\" por %s (CPF: %ld) registrada com sucesso!\n", livro->titulo, nome_pessoa, cpf_devolucao);
    printf("   Exemplares disponiveis agora: %d.\n", livro->qnt_disponivel);
}

void remover_livro(struct Biblioteca *biblioteca) {
    int id_remocao, indice;

    printf("\n--- Remocao de Livro ---\n");
    printf("Digite o ID do livro que deseja EXCLUIR do sistema: ");
    if (scanf("%d", &id_remocao) != 1) {
        printf("Entrada invalida. Retornando ao menu.\n");
        while (getchar() != '\n');
        return;
    }

    indice = buscar_livro_por_id(biblioteca, id_remocao);
    if (indice == -1) {
        printf("\nLivro com ID %d nao encontrado.\n", id_remocao);
        return;
    }

    char titulo_removido[MAX_TITULO_LEN];
    strcpy(titulo_removido, biblioteca->Livros[indice].titulo);

    for (int i = indice; i < biblioteca->total_livros - 1; i++) {
        biblioteca->Livros[i] = biblioteca->Livros[i + 1];
    }

    biblioteca->total_livros--;

    printf("\nLivro \"%s\" (ID: %d) removido com sucesso do sistema.\n", titulo_removido, id_remocao);
    printf("Total de livros na biblioteca: %d.\n", biblioteca->total_livros);
}


void exibir_menu() {
    printf("\n\n=============== MENU DE GERENCIAMENTO ===============");
    printf("\n1. Cadastro de livros"); 
    printf("\n2. Consulta de livros");
    printf("\n3. Emprestimo de livros"); 
    printf("\n4. Devolucao de livros"); 
    printf("\n5. Remocao de livros"); 
    printf("\n6. Encerrar o programa");
    printf("\n----------------------------------------------------");
    printf("\nEscolha uma opcao: ");
}

int main() {
    struct Biblioteca biblioteca;
    inicializar_biblioteca(&biblioteca);

    int opcao;

    do {
        exibir_menu();
        if (scanf("%d", &opcao) != 1) {
            printf("\nEntrada invalida. Por favor, digite um numero de 1 a 6.\n");
            while (getchar() != '\n');
            continue; 
        }

        switch (opcao) {
            case 1:
                cadastrar_livro(&biblioteca);
                break;
            case 2:
                consultar_livros(&biblioteca);
                break;
            case 3:
                realizar_emprestimo(&biblioteca);
                break;
            case 4:
                realizar_devolucao(&biblioteca);
                break;
            case 5:
                remover_livro(&biblioteca);
                break;
            case 6:
                printf("\nEncerrando o Sistema de Gerenciamento de Biblioteca. Ate mais!\n");
                break;
            default:
                printf("\nOpcao invalida. Por favor, escolha um numero de 1 a 6.\n");
                break;
        }

    } while (opcao != 6);

    return 0;
}