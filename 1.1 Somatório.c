#include <stdio.h>

//Pilha de Execução:

//somar_ate(0) → retorna 0                      
//somar_ate(1) → retorna 1 + somar_ate(0) = 1 + 0 = 1
//somar_ate(2) → retorna 2 + somar_ate(1) = 2 + 1 = 3
//somar_ate(3) → retorna 3 + somar_ate(2) = 3 + 3 = 6
//somar_ate(4) → retorna 4 + somar_ate(3) = 4 + 6 = 10

int somar_ate(int n){
    if (n == 0) {
        return 0;
    }
        
    else {
        return n + somar_ate(n -1);
    }
}
    
int main() {
    printf("%d", somar_ate(7));
    return 0;
}
