#include <stdio.h>
int main(){
    char operador;
    float a, b;

    printf("Digite a operacao (+, = , *, /):\n");
    scanf("%c", &operador);

    printf("Digite os dois valores:\n");
    scanf("%f %f", &a, &b);

    switch (operador){
        case '+': //Esse valor guardado em char é sempre '' para um caracter apenas
            printf("%.2f %c %.2f = %.2f", a, operador, b, (a+b)); //Ao inves dessa soma
            //poderiamos ter uma variável declarada lá em cima...
            break;
        case '-':
            printf("%.2f %c %.2f = %.2f", a, operador, b, (a-b));
            break;
        case '*':
            printf("%.2f %c %.2f = %.2f", a, operador, b, (a*b));
            break;
        case '/': //divisoes por zero nao existem
            if (a != 0 && b != 0) {
                printf("%.2f %c %.2f = %.2f", a, operador, b, (a/b));
            } else{
                printf("Nao eh possivel fazer uma divisao por zero");
            }
            break;
        default:
            printf("Operador invalido! Tente diferente.");
    }
    return 0;
}