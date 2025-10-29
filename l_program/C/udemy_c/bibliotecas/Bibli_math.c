/*Conjunto de várias funções diferentes que são incluidas
dentro de um projeto. Servem para escrevermos menos, e fazermos mais.

<math.h> - funções matemáticas:
- sqrt() - raiz quadrada
- pow() - potencia
- abs() / fabs() - valor absoluto
- sin(), cos(), tan() - trigonometria
*/

#include <stdio.h>
#include <math.h>

int main(){
    double base = 2, expoente = 3;
    printf("2 elevado a 3: %.2f\n", pow(base, expoente));
    printf("Raiz quadrada de 25: %.2f\n", sqrt(25));
    return 0;
}