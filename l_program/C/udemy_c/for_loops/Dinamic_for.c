//Podemos deixar a instrução para acabar de maneira dinâmica.
//Ao inves de um número fizo, o nosso usuário nos diga quantas formas isso vai acontecer:
//Veja o seguinte problema:
//Você vai na academia e vai treinar x dias, e cada dia de treino,
//você faz um print "Tá pago"

#include <stdio.h>
int main(){
    int dias;
    printf("Quantos dias de treinamento: ");
    scanf("%d", &dias);
    //Com base nessa var dias, criaremos um loops de repetição que vai do dia um,
    //até o dia que a pessoa colocou aqui.
    for (int i = 1; i <= dias; i++){ //Aqui é onde tornamos dinâmico: Ao inves de um núemro, sera
        printf("Dia %d: Ta pago!\n", i);  //A var que o suário declarou
    }
    printf("\nTreinamento concluido!");
    return 0;
}