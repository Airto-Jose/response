#include <stdio.h>

int pertenceFibonacci(int numero) {
    int a = 0, b = 1, c = 0;

    if (numero == 0 || numero == 1) {
        return 1; // 0 e 1 pertencem à sequência de Fibonacci
    }

    while (c < numero) {
        c = a + b;
        a = b;
        b = c;
    }

    if (c == numero) {
        return 1; // O número pertence à sequência de Fibonacci
    } else {
        return 0; // O número não pertence à sequência de Fibonacci
    }
}

int main() {
    int numero;

    // Solicita ao usuário para informar um número
    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (pertenceFibonacci(numero)) {
        printf("O numero %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O numero %d NÃO pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
