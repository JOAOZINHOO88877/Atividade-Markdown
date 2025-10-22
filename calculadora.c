#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("=== Calculadora Switch-Case ===\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("\nEscolha uma operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("\nResultado da soma: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("\nResultado da subtração: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("\nResultado da multiplicação: %.2f\n", resultado);
            break;
        case 4:
            if (num2 != 0)
                printf("\nResultado da divisão: %.2f\n", num1 / num2);
            else
                printf("\nErro: divisão por zero não permitida.\n");
            break;
        default:
            printf("\nOpção inválida! Tente novamente.\n");
            break;
    }

    printf("\n=== Fim do programa ===\n");
    return 0;
}
