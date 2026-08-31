#include <stdio.h>

// Pilha de Execução:

//fatorial(1) = 1
//fatorial(2) = 2 * 1   = 2
//fatorial(3) = 3 * 2   = 6
//fatorial(4) = 4 * 6   = 24
//fatorial(5) = 5 * 24  = 120
//fatorial(6) = 6 * 120 = 720
//fatorial(7) = 7 * 720 = 5040

int fatorial(int n ){
    if (n == 0 ) return 1;
    else return n * fatorial(n-1);
}
    
int main(){
    printf("%d", fatorial(7));

        
}
    