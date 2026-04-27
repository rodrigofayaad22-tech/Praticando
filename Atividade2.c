#include <stdio.h>

int main() {
    int inicio, fim, i, contador = 0;

    printf("Digite o numero do inicio: ");
    scanf("%d", &inicio);

    printf("Digite o numero do fim: ");
    scanf("%d", &fim);

    printf("Pares encontrados: ");

    for (i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            contador++;
        }
    }

    printf("\nTotal de pares: %d\n", contador);

    return 0;
}
