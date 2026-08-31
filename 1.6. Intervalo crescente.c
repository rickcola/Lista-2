// Pilha de Execução:

// intervalo(7, 7) → imprime 7

// intervalo(6, 7) → imprime 6 → intervalo(7, 7)

// intervalo(5, 7) → imprime 5 → intervalo(6, 7)

// intervalo(4, 7) → imprime 4 → intervalo(5, 7)

// intervalo(3, 7) → imprime 3 → intervalo(4, 7)

#include <stdio.h>

void intervalo(int a, int b) {
    if (a == b) {
        printf("%d ", a);
    } else {
        printf("%d ", a);
        intervalo(a + 1, b);
    }
}

int main() {
    intervalo(3, 7);

    return 0;
}