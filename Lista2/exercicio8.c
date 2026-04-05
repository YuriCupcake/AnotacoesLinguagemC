#include <stdio.h>

int main() {
    float temp; 

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    if (temp > 30) {
        printf("Situacao: Calor (va de camiseta)");
    } else {
        printf("Situacao: Frio");
    }

    return 0;
}