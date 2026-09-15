#include <stdio.h>

int main() {

    float valor, desconto, valorDesconto, valorPagar;
    int pagamento;

    // Solicita o valor da compra
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);

    // Mostra as formas de pagamento
    printf("\n===== FORMA DE PAGAMENTO =====\n");
    printf("1 - PIX (20%% de desconto)\n");
    printf("2 - Debito (15%% de desconto)\n");
    printf("3 - Credito (5%% de desconto)\n");

    printf("Digite a forma de pagamento: ");
    scanf("%d", &pagamento);

    // Escolhe o percentual de desconto
    switch(pagamento) {

        case 1:
            desconto = 20;
            break;

        case 2:
            desconto = 15;
            break;

        case 3:
            desconto = 5;
            break;

        default:
            printf("Forma de pagamento invalida!\n");
            return 0;
    }

    // Calcula o valor do desconto
    valorDesconto = valor * desconto / 100;

    // Calcula o valor final
    valorPagar = valor - valorDesconto;

    // Mostra os resultados
    printf("\n===== RESULTADO =====\n");
    printf("Valor da compra: R$ %.2f\n", valor);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor a pagar: R$ %.2f\n", valorPagar);

    return 0;
}
