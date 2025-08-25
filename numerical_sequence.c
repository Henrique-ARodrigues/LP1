#include <stdio.h>

int main() {
    int n;
    
    printf("O script vai gerar uma sequencia de 1 a n\n");
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n;) {
        i++;
        printf("%d\n", i);
    }

    return 0;
}
