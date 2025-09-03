/* Exercício 1: Cardápio Interativo
Crie um programa que exiba um menu com 4 opções de lanches:
Hambúrguer
Cachorro-quente
Pizza
Sair
O usuário deve digitar a opção desejada e o programa deve mostrar uma mensagem
correspondente. Se o usuário digitar 4, o programa deve exibir "Encerrando
pedido...". Se digitar qualquer outro número, mostrar "Opção inválida!".*/
#include <stdio.h>
int main(){
    int opcao;
    printf("\nESCOLHA O NUMERO DO SEU PEDIDO:");
    printf("\n====Cardapio====\n");
    printf("1- Hamburguer\n");
    printf("2- cachorro-quente\n");
    printf("3- pizza\n");
    printf("4- sair\n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Voce escolheu Hamburguer!\n");
            break;
        case 2:
            printf("Voce escolheu cachorro-quente!\n");
            break;
        case 3:
            printf("Voce escolheu pizza!\n");
            break;
        case 4:
            printf("Voce saiu do cardapio!\n");
            break;
        default:
            printf("\nTente novamente\n");
    }
    return 0;
}