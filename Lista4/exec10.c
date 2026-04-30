#include <stdio.h>

int main() {
    int num, maior, menor;

    for (int i = 1; i <= 5; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &num);

        if (i == 1) {
            maior = num;
            menor = num;
        } else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}