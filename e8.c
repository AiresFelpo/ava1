#include <stdio.h>

int main() {
    int numero, maior, menor;
    int primeiroNumero = 1;

    printf("Digite uma sequencia de numeros inteiros (para encerrar, digite um numero negativo):\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        if (primeiroNumero) {
            maior = numero;
            menor = numero;
            primeiroNumero = 0;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }

    if (primeiroNumero) {
        printf("Nenhum numero foi digitado.\n");
    } else {
        printf("O maior numero digitado foi: %d\n", maior);
        printf("O menor numero digitado foi: %d\n", menor);
    }

    return 0;
}
