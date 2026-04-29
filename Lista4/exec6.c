#include <stdio.h>

int main() {
    int senha = 1234;
    int senhaDigitada=0;
  
  printf("Digite a senha: ");
  scanf("%d", &senhaDigitada);
  
  while(senhaDigitada != senha) {
      printf("Informe a senha novamente: ");
    scanf("%d", &senhaDigitada);
  }
   printf("Login Cmpleto");
   return 0;
}