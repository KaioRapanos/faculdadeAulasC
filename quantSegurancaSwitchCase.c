#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int quantidadeIngressos = 0;

    printf("Digite a quantidade de ingressos\n");
    scanf("%d", &quantidadeIngressos);

    int numSegurancas;

    switch (quantidadeIngressos) {
        case 1 ... 1000:
            numSegurancas = 4;
            break;
        case 1001 ... 5000:
            numSegurancas = 6;
            break;
        case 5001 ... 10000:
            numSegurancas = 10;
            break;
        case 10001 ... 20000:
            numSegurancas = 15;
            break;
        case 20001 ... 50000:
            numSegurancas = 25;
            break;
        default:
            printf("Serão necessários autorizações especiais\n");
            return 0;
    }

    printf("Serão necessários %d seguranças\n", numSegurancas);

    return 0;
}