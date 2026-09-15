#include <stdio.h>

int main() {

    int categoria;

    // Mostra as categorias disponíveis
    printf("Digite o codigo da categoria: ");
    scanf("%d", &categoria);

    // Verifica a categoria escolhida
    switch(categoria) {

        case 1:
            printf("Frios e Laticinios\n");
            break;

        case 2:
            printf("Carnes e Peixes\n");
            break;

        case 3:
            printf("Hortifruti\n");
            break;

        case 4:
            printf("Padaria\n");
            break;

        case 5:
            printf("Bebidas\n");
            break;

        default:
            printf("Categoria invalida\n");
    }

    return 0;
}
