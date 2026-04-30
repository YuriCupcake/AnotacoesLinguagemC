#include <stdio.h>

int main() {
    int num;
    int soma = 0;

    while (soma <= 100) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        soma += num;
        printf("Soma atual: %d\n", soma);
    }

    printf("A soma ultrapassou 100! Soma final: %d\n", soma);

    return 0;
}