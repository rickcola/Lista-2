#include <stdio.h>
#include <string.h>
// Pilha de Execução: "arara"
// isPalindromo(0,4) → 'a'=='a' → chama (1,3)
// isPalindromo(1,3) → 'r'=='r' → chama (2,2)
// isPalindromo(2,2) → caso base → retorna 1
// retorna 1 → retorna 1 → imprime 1

// Pilha de Execução: "arada"
// isPalindromo(0,4) → 'a'=='a' → chama (1,3)
// isPalindromo(1,3) → 'r'!='d' → retorna 0
// retorna 0 → imprime 0

int isPalindromo(char palavra[], int inicio, int fim) {
    if (inicio >= fim) {
        return 1;
    }

    if (palavra[inicio] != palavra[fim]) {
        return 0;
    }

    return isPalindromo(palavra, inicio + 1, fim - 1);
}

int main() {
    char palavra[100];

    while (scanf("%s", palavra) == 1) {
        int fim = strlen(palavra) - 1;
        printf("%d\n", isPalindromo(palavra, 0, fim));
    }

    return 0;
}