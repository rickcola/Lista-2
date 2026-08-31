#include <stdio.h>
// Pilha de Execução:

// soma_digitos(9)  = 9

// soma_digitos(98) = 8 + 9 = 17

// soma_digitos(987) = 7 + 17 = 24

// soma_digitos(9876)  = 6 + 24 = 30

// soma_digitos(98765)  = 5 + 30 = 35

// soma_digitos(987654) = 4 + 35 = 39

int soma_digitos(int n) {
    if (n < 10) {
        return n;
    } else {
        return (n % 10) + soma_digitos(n / 10);
    }
}

int main() {
    printf("%d", soma_digitos(987654));
    return 0;
}