#include <stdio.h>

int main() {

    float meta, valorMes, total = 0;
    int mesesValidos = 0;

    printf("Digite a meta de economia: ");
    scanf("%f", &meta);

    while(total < meta) {

        printf("Digite o valor economizado: ");
        scanf("%f", &valorMes);

        if(valorMes > 0) {

            total += valorMes;
            mesesValidos++;
        }

        else {
            printf("VALOR DESCONSIDERADO");
        }
    }

    printf("Total economizado: %.2f", total);
    printf("Meses validos: %d", mesesValidos);

    return 0;
}