#include <stdio.h>
int main(){
    int A=13, B=5, Temp;
    Temp = A;
    A = B;
    B = Temp;
    printf("%d\n%d", A, B);
    return 0;
}