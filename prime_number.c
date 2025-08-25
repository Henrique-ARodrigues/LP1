#include <stdio.h>
#include <math.h>


int main() {
    int n = 0;

    printf("Digite um numero para verificar se e primo.\n");
    scanf("%d", &n);
    int raiz = sqrt(n);
    
    if(n < 2) {
        printf("Nao e primo\n");
    } else if(n % 2 == 0) {
        printf("Nao e primo\n");
    } else if(n == 2) {
        printf("E primo\n");
    } else {
        int primo = 1;
        for(int i = 3; i <= raiz; i += 2) {
            if(n % i == 0) {
                primo = 0;    
            }
        }
        if(primo == 1){
            printf("E primo\n");
        } else {
            printf("Nao e primo\n");
        }
    }

    return 0;
}
