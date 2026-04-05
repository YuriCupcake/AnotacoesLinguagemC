#include <stdio.h>

int main() {
    int temDinheiro, conseguiuEmprestimo;

    printf("Voce tem dinheiro? (1-Sim / 0-Nao): ");
    scanf("%d", &temDinheiro);

    if (temDinheiro == 1) {
        printf("Resultado: Compra!\n");
    } 
    else {
        printf("Voce conseguiu um emprestimo? (1-Sim / 0-Nao): ");
        scanf("%d", &conseguiuEmprestimo);

        if (conseguiuEmprestimo == 1) {
            printf("Resultado: Compra!\n");
        } 
        else {
            printf("Resultado: Nao compra.\n");
        }
    }

    return 0;
}