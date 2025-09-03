//Construir um programa que leia o salário mensal atual de um funcionário
//e o percentual de reajuste.
//Determine o valor do novo salário e imprima os valores
//lidos e o novo salário. Dica:
//O valor do novo salário corresponde ao
//salario_inicial * (1 + percentual / 100).
//Lembre-se que para que esse código funcione corretamente,
//salario_inicial e percentual devem ser do tipo double.
#include <stdio.h>
int main(){
    double salario, percento;
    printf("Digite o seu salario:\n ");
    scanf("%lf", &salario);
    printf("Digite o percentual de reajuste (apenas numero): ");
    scanf("%lf", &percento);
    float novoSalario = salario * (1 + percento / 100);
    printf("O valor do novo salario eh:\n %lf", novoSalario);
    return 0;
}