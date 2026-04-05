#include <stdio.h>

int main() {
   int idade;
    printf("DIGITE SUA IDADE:\n");
    scanf ("%d" ,&idade);
    
    if (idade >=18) {
        printf ("PODE ENTRAR");
    }
    else if (idade >=16) {
        printf ("PODE ENTRAR COM RESPONSÁVEL");
}
    else {
        printf ("NÃO PODE ENTRAR");
    }
    return 0;
    
}