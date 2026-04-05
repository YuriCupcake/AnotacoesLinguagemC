#include <stdio.h>
int main() {
   int nota;
    printf("DIGITE SUA NOTA:\n");
    scanf ("%d" , &nota);
if (nota >=7) {
    printf ("APROVADO");
    }
    else if (nota >=5) {
        printf ("RECUPERAÇÃO");
    }
    else {
        printf ("REPROVADO");
    }
    return 0;
}