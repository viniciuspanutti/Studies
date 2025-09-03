/*Verificação de Nota e Frequência para Aprovação​
Você foi contratado para fazer um sistema simples de avaliação escolar.
O programa deve apresentar o seguinte menu:
1- Verificar se o aluno foi aprovado
2 -Sair
​Se o usuário escolher a opção 1, o programa deve solicitar a nota final
(de 0 a 10) e a frequência (porcentagem de presença, de 0 a 100).
O aluno só será aprovado se a nota for maior ou igual a 7 e a frequência for maior
ou igual a 75%. Use if else para essa verificação dentro do case 1.
Se o usuário escolher a opção 2, o programa deve encerrar.
Se for digitada uma opção inválida, exiba a mensagem "Opção inválida!".*/
#include <stdio.h>
int main(){
    int menu;
    int nota, frequencia;
    printf("\nDIGITE UMA OPCAO:\n");
    printf("1- Verificar aprovacao de aluno\n");
    printf("2- Sair\n");
    scanf("%d", &menu);
    switch (menu){
        case 1:
            printf("Digite a nota final do aluno: ");
            scanf("%d", &nota);
            printf("Digite a frequencia do aluno em numero: ");
            scanf("%d", &frequencia);
            if (nota >= 7 && frequencia >= 75){
                printf("Aluno Aprovado!");
            } else {
                printf("Aluno Reprovado!");
            }
            break;
        case 2:
            printf("Voce saiu do programa!\n");
            break;
        default:
            printf("\nTente novamente\n");
    }
    return 0;
}