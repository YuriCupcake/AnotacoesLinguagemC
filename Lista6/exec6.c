#include <stdio.h>

int main() {

    int numeros[10];
    int i, valor, encontrado = 0;

    // Leia os valores
    for(i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("Digite o valor a buscar: ");
    scanf("%d", &valor);

    // Procure o valor
    for(i = 0; i < 10; i++) {
        if(numeros[i] == valor) {
            encontrado = 1;
        }
    }

    if(encontrado) {
        printf("Valor encontrado!");
    } else {
        printf("Valor nao encontrado!");
    }

    return 0;
}