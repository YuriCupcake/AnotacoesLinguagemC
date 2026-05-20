#include <stdio.h>

int main() {

    int numeros[10];
    int i;

    // Leia os valores
    for(i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    // Substitua negativos por zero
    for(i = 0; i < 10; i++) {
        if(numeros[i] < 0) {
            numeros[i] = 0;
        }
    }

    // Exiba o vetor final
    printf("Vetor final:");

    for(i = 0; i < 10; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}