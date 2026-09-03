#include <stdio.h>

// Pilha de Execução: n = 5, k = 2
// josefo(5,2) → chama josefo(4,2)   
// josefo(4,2) → chama josefo(3,2)  
// josefo(3,2) → chama josefo(2,2)   
// josefo(2,2) → chama josefo(1,2)  
// josefo(1,2) → n==1 → CASO BASE → retorna 0   
//
// josefo(2,2) → recebe 0 → (0+2)%2 = 0 → retorna 0   
// josefo(3,2) → recebe 0 → (0+2)%3 = 2 → retorna 2   
// josefo(4,2) → recebe 2 → (2+2)%4 = 0 → retorna 0  
// josefo(5,2) → recebe 0 → (0+2)%5 = 2 → retorna 2   
// main() imprime 2

int josefo(int n, int k) {
    if (n == 1) {
        return 0;
    }

    return (josefo(n - 1, k) + k) % n;
}

int main() {
    int n, k;

    while (scanf("%d, %d", &n, &k) == 2) {
        printf("%d\n", josefo(n, k));
    }

    return 0;
}


