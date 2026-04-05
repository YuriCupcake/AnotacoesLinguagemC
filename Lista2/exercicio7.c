#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

   if (idade >= 60) {
        
        printf("Classificacao: Idoso");
    } 
    else if (idade >= 18) {
    
        printf("Classificacao: Adulto");
    } 
    else {
      
      printf("Classificacao: Menor");
    }

    return 0; 
}