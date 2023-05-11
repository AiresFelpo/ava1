#include <stdio.h>

int main() {
    int limite = 1000;
    int soma = 0;

    for (int i = 1; i < limite; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    printf("A soma dos numeros naturais abaixo de %d que sao multiplos de 3 ou 5 eh: %d\n", limite, soma);

    return 0;
}
