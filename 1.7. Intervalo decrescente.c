// Pilha de Execução:

// intervalo(7, 7) → imprime 7

// intervalo(6, 7) → imprime 7 6

// intervalo(5, 7) → imprime 7 6 5

// intervalo(4, 7) → imprime 7 6 5 4

// intervalo(3, 7) → imprime 7 6 5 4 3
#include <stdio.h>

void intervalo(int a, int b) {
    if (a == b) {
        printf("%d ", b);
    } else {
        intervalo(a + 1, b);
        printf("%d ", a);
    }
}

int main() {
    intervalo(3, 7);

    return 0;
}