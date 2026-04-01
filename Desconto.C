#include <stdio.h>

int main() {
    float valor;
    printf ("DIGITE UM VALOR:\n");
   scanf("%f" , &valor);

 if(valor > 100) {
     printf("RECEBE DESCONTO");
 }
 else  {
     printf("SEM DESCONTO");
     
}
    return 0;
}