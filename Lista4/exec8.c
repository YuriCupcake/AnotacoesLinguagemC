#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n1 - Opcao 1\n");
        printf("2 - Opcao 2\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Voce escolheu a Opcao 1\n");
        } else if (opcao == 2) {
            printf("Voce escolheu a Opcao 2\n");
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}