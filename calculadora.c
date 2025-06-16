#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

int main() {
    char escolha;
    float num1, num2, resultado;
    char operacao;

    do {
        printf("Digite o numero 1:");
        scanf("%f", &num1);

        printf("Digite o número 2:");
        scanf("%f", &num2);

        printf("Escolha a operação (+, -, *, /):");
        scanf("%c", &operacao);

        if (operacao == '+') {
            resultado = somar(num1, num2);
            printf("Resultado: %.2f\n", resultado);
        }
        else if (operacao == '-') {
            resultado = subtrair(num1, num2);
            printf("Resultado: %.2f\n", resultado);
        }
        else if (operacao == '*') {
            resultado = multiplicar(num1, num2);
            printf("Resultado: %.2f\n", resultado);
        }
        else if (operacao == '/') {
            if (num2 != 0) {
                resultado = dividir(num1, num2);
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Divisão por 0 não permitida.\n");
            }
        }
        else {
            printf("Operação inválida!\n");
        }

        printf("Deseja fazer outro cálculo? (Digite 'q' para sair ou qualquer outra tecla para continuar):");
        scanf("%c", &escolha);

    } while (escolha != 'q');

    printf("Programa encerrado.\n");

    return 0;
}


