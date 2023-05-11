#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &numero);
    
    printf("Os divisores do numero %d sao: ", numero);
    
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}
