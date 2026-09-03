#include <stdio.h>

// Pilha de Execução: n = 13
// dec2bin(13) → 13>1 → chama dec2bin(6)
// dec2bin(6)  → 6>1  → chama dec2bin(3)
// dec2bin(3)  → 3>1  → chama dec2bin(1)
// dec2bin(1)  → 1>1 é falso → não chama mais ninguém
// dec2bin(1)  → imprime 1%2 = 1
// dec2bin(3)  → imprime 3%2 = 1
// dec2bin(6)  → imprime 6%2 = 0
// dec2bin(13) → imprime 13%2 = 1
// Saída: 1101

void dec2bin(int n) {
    if (n > 1) {
        dec2bin(n / 2); 
    }
    printf("%d", n % 2);  
}

int main() {
    int n;

    while (scanf("%d", &n) == 1) {
        if (n == 0) {
            printf("0");
        } else {
            dec2bin(n);
        }
        printf("\n");
    }

    return 0;
}