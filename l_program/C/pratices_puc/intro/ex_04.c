//O cálculo básico para estimar a gordura corporal é o Índice de
//Massa Corporal (IMC). É calculado dividindo o peso (em quilogramas) pela
//altura ao quadrado (em metros). Embora o IMC não meça diretamente a gordura corporal,
//ele é amplamente utilizado como uma ferramenta de triagem para avaliar se uma pessoa
//está abaixo do peso, com peso normal, com sobrepeso ou obesa. Faça um programa que
//leia o peso e altura de um indivíduo e imprima seu IMC. Dica:
//Lembre-se que para que esse código funcione corretamente, peso e altura devem ser do tipo double.
#include <stdio.h>

int main() {
    double peso, altura;
    printf("Digite o seu peso em kg: ");
    scanf("%lf", &peso);
    printf("Digite a sua altura em cm: ");
    scanf("%lf", &altura);
    altura = altura / 100;
    double imc = peso / (altura * altura);
    printf("O seu IMC eh: %.2lf\n", imc);
    return 0;
}