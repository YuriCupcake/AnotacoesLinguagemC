#include <stdio.h>

int main() {
    int numeros[10];
    int i;

    // Leia os 10 números
    for(i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    // Exiba os 10 números
    printf("Numeros digitados:\n");

    for(i = 0; i < 10; i++) {
        printf("%d\n", numeros[i]);
    }

return 0;
}