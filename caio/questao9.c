#include <stdio.h>

int main() {

    int opcao;

    // Mostra o menu de veiculos
    printf("===== SISTEMA DE TRANSPORTE =====\n");
    printf("1 - Carro\n");
    printf("2 - Motocicleta\n");
    printf("3 - Van\n");
    printf("4 - Onibus\n");
    printf("5 - Caminhao\n");
    printf("6 - Encerrar\n");

    // Solicita o tipo de veiculo
    printf("Digite o codigo do veiculo: ");
    scanf("%d", &opcao);

    // Verifica o veiculo escolhido
    switch(opcao) {

        case 1:
            printf("\nVeiculo: Carro\n");
            printf("Finalidade: Transporte de passageiros em pequena quantidade.\n");
            break;

        case 2:
            printf("\nVeiculo: Motocicleta\n");
            printf("Finalidade: Entregas rapidas e transporte de pequenas cargas.\n");
            break;

        case 3:
            printf("\nVeiculo: Van\n");
            printf("Finalidade: Transporte de passageiros ou pequenas cargas.\n");
            break;

        case 4:
            printf("\nVeiculo: Onibus\n");
            printf("Finalidade: Transporte coletivo de passageiros.\n");
            break;

        case 5:
            printf("\nVeiculo: Caminhao\n");
            printf("Finalidade: Transporte de cargas.\n");
            break;

        case 6:
            printf("\nSistema encerrado. Obrigado!\n");
            break;

        default:
            printf("\nOpcao invalida. Digite um codigo valido.\n");
    }

    return 0;
}
