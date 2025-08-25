#include <stdio.h>

int main() {
    int N[5] = {0};
    int soma = 0;

    printf("Digite 5 numeros para serem somados: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &N[i]);
        soma += N[i];
    }

    printf("Soma = %d\n", soma);

    return 0;
}
