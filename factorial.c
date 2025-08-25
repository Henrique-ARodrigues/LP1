#include <stdio.h>

int main() {
    int n = 0;

    printf("Digite um numero para fazer o fatorial: ");
    scanf("%d", &n);
    
    int i = n - 1;
    while(i > 0) {
        n *= i;
        i--;
    }

    printf("O fatorial e igual a: %d\n", n);

    return 0;
}
