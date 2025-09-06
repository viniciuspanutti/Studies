#include <stdio.h>
int main(){
    int N;
    printf("Digite um numero: ");
    scanf("%d", &  N);
    for (int i = 1; i <= N; i++){
        if (i % 2 == 0){
            printf("%d, ", i);
        }
        for (int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}