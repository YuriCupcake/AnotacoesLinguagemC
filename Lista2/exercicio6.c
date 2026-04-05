#include <stdio.h>

int main() {
  float nota, frequencia;   
    
    printf("Digite a nota:");
   scanf("%f", &nota);
    
    printf("Digite a frequencia");
    scanf("%f", &frequencia);
    
    if(nota >=7 && frequencia >= 75) {
        printf("Aprovado");
    
    } else {
        printf("REPROVADO");
    }
    return 0;
}