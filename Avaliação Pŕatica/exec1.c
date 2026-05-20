#include <stdio.h>
int main() {
    float notas[10];  
    float frequencia;
    int pos;

    int aprovados = 0;
    int reprovados = 0;

    float maiorNota = 0;
    for (pos = 0; pos < 10; pos++){
        printf("Digite a %dª nota: ", pos);
        scanf("%f", &notas[pos]);
    }
    printf("Valores digitados:\n");
    for (pos = 0; pos < 10; pos++){
        printf("Digite a frequencia da %dª nota: ", pos);
        scanf("%f", &frequencia);
        if(notas >= 7 && frequencia >= 75) {
           aprovados++;
        }else {
           reprovados++; 
}
   
   
    printf("aprovados: %d\n", aprovados);
    printf("reprovados: %d\n",reprovados);
    
    return 0;
}