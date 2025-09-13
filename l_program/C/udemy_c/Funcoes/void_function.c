#include <stdio.h>

/*
void mostrarMensagem(){ //void não tem retorno, ela não retorna nada, 
    //mas não signfifica que ela não faça nada, obviamente...
    //Aqui não damos retonro
    printf("Volte sempre!\n");
}*/
void mostrarMensagem(){
    printf("=== MENU DE OPÇÕES === \n");
    printf("1 - Ver Saldo\n");
    printf("2 - Fazer deposito\n");
    printf("3 - Fazer saque\n");
    printf("4 - sair\n");
    printf("======================== \n");
}

int main(){
    //Chamada da função
    mostrarMensagem();

    int opcao;
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Voce escolheu a opcao %d.\n", opcao);
    return 0;
    //Para melhorar o programa usaríamos um loop, ou até um switch case
    //Mas poderíamos usar um while tmb - while opcao != 4, exibir...
}