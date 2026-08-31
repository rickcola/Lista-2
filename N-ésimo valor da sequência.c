#include <stdio.h>
// Pilha de Execução:

// conta(9) = 1

// conta(98) = 1 + 1 = 2

// conta(987) = 1 + 2 = 3

// conta(9876) = 1 + 3 = 4

// conta(98765) = 1 + 4 = 5

// conta(987654) = 1 + 5 = 6

int quantidade_digitos(int n) {
    if (n < 10) {
        return 1;
    } else {
        return 1 + quantidade_digitos(n / 10);
    }
}
int main(){
    printf("%d", quantidade_digitos(987654));
}