#include <stdio.h>

int main() {

    int opcao;
    float saldo = 1000.00, deposito;

    do {

        printf("\n1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("0 - Sair\n");

        scanf("%d", &opcao);

        if(opcao == 1) {

            printf("Saldo: %.2f\n", saldo);
        }

        else if(opcao == 2) {

            printf("Digite o valor do deposito: ");
            scanf("%f", &deposito);

            if(deposito > 0) {
                saldo += deposito;
            }
        }

        else if(opcao != 0) {

            printf("OPCAO INVALIDA");
        }

    } while(opcao != 0);

    printf("Programa encerrado.");

    return 0;
}