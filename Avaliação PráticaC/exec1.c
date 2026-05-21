#include <stdio.h>

int main() {

    float notas[10];
    float frequencia;
    int pos;

    int aprovados = 0;
    int reprovados = 0;

    float maiorNota = 0;

    for(pos = 0; pos < 10; pos++) {

        printf("Digite a %dª nota: ", pos + 1);
        scanf("%f", &notas[pos]);

        if(notas[pos] > maiorNota) {
            maiorNota = notas[pos];
        }
    }

    printf("\n");

    for(pos = 0; pos < 10; pos++) {

        printf("Digite a frequencia da %dª nota: ", pos + 1);
        scanf("%f", &frequencia);

        if(notas[pos] >= 7 && frequencia >= 75) {
            aprovados++;
        } else {
            reprovados++;
        }
    }
    printf("\n");
    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    printf("Maior nota: %.2f\n", maiorNota);

    return 0;
}