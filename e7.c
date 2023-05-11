#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int termo_anterior = 0;
        int termo_atual = 1;
        int resultado = 0;
        
        for (int i = 2; i <= n; i++) {
            resultado = termo_anterior + termo_atual;
            termo_anterior = termo_atual;
            termo_atual = resultado;
        }
        
        return resultado;
    }
}

int main() {
    int n;
    
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);
    
    int termo = fibonacci(n);
    
    printf("O enesimo termo da sequencia de Fibonacci eh: %d\n", termo);
    
    return 0;
}
