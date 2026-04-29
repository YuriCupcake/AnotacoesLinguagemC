#include <stdio.h>

int main() {
    int num= 0, total =0, positivos =0;
   printf("informe o número:\n");
   scanf("%d" , &num);
   while (num != 0) {
       total++;
       if(num > 0) {
          positivos++;   
    }
    printf("Informe o númnero: \n");
    scanf("%d", &num);
    
}
 printf("Total: %d\n", total);
 printf("positivos: %d\n", positivos);
    
    return 0;
}
