#include <stdio.h>

int main() {

    int numeros[8];
    int i;

    // Leia os valores
    for(i = 0; i < 8; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    // Exiba em ordem inversa
    printf("Ordem inversa:");

    for(i = 7; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}