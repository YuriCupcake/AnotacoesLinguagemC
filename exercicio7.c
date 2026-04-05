#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

   if (idade >= 60) {
        
        printf("Classificacao: Idoso\n");
    } 
    else if (idade >= 18) {
    
        printf("Classificacao: Adulto\n");
    } 
    else {
      
      printf("Classificacao: Menor\n");
    }

    return 0; 
}