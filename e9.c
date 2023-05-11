#include <stdio.h>

int main() {
    int opcao;
    int quantidade;
    float valorTotal = 0.0;

    while (1) {
        printf("Menu de Frutas:\n");
        printf("1 => ABACAXI – 5,00 a unidade\n");
        printf("2 => MAÇA – 1,00 a unidade\n");
        printf("3 => PERA – 4,00 a unidade\n");
        printf("0 => Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break;
        }

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidade);

        switch (opcao) {
            case 1:
                valorTotal += 5.0 * quantidade;
                break;
            case 2:
                valorTotal += 1.0 * quantidade;
                break;
            case 3:
                valorTotal += 4.0 * quantidade;
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    }

    printf("Valor total da compra: %.2f\n", valorTotal);

    return 0;
}
