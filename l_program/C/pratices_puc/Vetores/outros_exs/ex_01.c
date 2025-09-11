/*Crie um programa que leia os FPS (frames por segundo) de um jogo em
6 momentos e calcule a média. */
#include <stdio.h>
int main(){
    int framesFPS[6];
    int i;
    for (i = 0; i < 6; i++){
        printf("Digite o momento de FPS%d: ", i + 1);
        scanf("%d", &framesFPS[i]);
    }
    int count = 0;
    for (i = 0; i < 6; i++){
        printf("momento %d: %d\n", i + 1, framesFPS[i]);
        count += framesFPS[i];
    }
    count = framesFPS[i]/6;
    printf("O valor final de i eh = %d", count);
    return 0;
}