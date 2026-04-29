#include <stdio.h>

int main() {
    int num= 0;
   int i, numero, maiorQ50 = 0;
   for(int i =0; i<= 10; i++) {
       printf("Digite o %d° numero: ", i+1);
        scanf("%d", &num);
        if(num >50) {
            maiorQ50++;
        }
    }
    printf("Total de numeros maiores que 50: %d\n", maiorQ50);
    return 0;
}