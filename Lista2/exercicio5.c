#include <stdio.h>

int main() {
   int n;
    printf("Digite um número:");
    scanf("%d" , &n);
    
if (n >0) {
    printf("POSITIVO");
   
} else if ( n <0) {
    printf("NEGATIVO");

} else {
    printf("ZERO");
}
    return 0;
}