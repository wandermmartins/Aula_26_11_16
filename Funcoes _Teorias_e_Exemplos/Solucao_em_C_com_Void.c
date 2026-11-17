#include <stdio.h>

/**
 * Exibe um relatório de financiamento formatado no console.
 * @param nome O nome do cliente
 * @param total O valor total do financiamento
 * @param entrada O valor da entrada
 */
void mostrarRelatorio(char nome[], double total, double entrada) {
    double restante = total - entrada;
    printf("\n--- RELATÓRIO ---\n");
    printf("NOME: %s\n", nome);
    printf("VALOR TOTAL: R$%.2f\n", total); printf("VALOR DE ENTRADA: R$ %.2f\n", entrada);
    printf("VALOR PARCELADO: R$ %.2f\n", restante);
    printf("-----------------\n");
}

int main() {
    char nomeCliente[100];
    double valorTotal, valorEntrada;

    printf("Nome do cliente: ");
    scanf("%99s", nomeCliente);
    printf("Valor total financiado: ");
    scanf("%lf", &valorTotal);
    printf("Valor de entrada: ");
    scanf("%lf", &valorEntrada);

    // A chamada de uma função void é uma instrução "solta"
    mostrarRelatorio(nomeCliente, valorTotal, valorEntrada);

    return 0;
}