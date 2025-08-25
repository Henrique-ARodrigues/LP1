#include <stdio.h>

int main() {
    int Celsius = 0;
    int Fahrenheit = 0;
    int entrada = 0;

    printf("Escolha se a temperatura vai ser convertida para celsius (1), ou fahrenheit (2).");
    scanf("%d", &entrada);

    if(entrada == 2){
        printf("Digite o valor em celsius: ");
        scanf("%d", &Celsius);
        Fahrenheit = (Celsius * 1.8) + 32;
        printf("%d° fahrenheit.\n", Fahrenheit);
    }else if(entrada == 1){
        printf("Digite o valor em fahrenheit: ");
        scanf("%d", &Fahrenheit);
        Celsius = ((Fahrenheit - 32) * 5) / 9;
        printf("%d° celsius.\n", Celsius);


    }else {
        printf("Entrada incorreta!");
        printf("Escolha se a temperatura vai ser convertida para celsius (1), ou fahrenheit (2).");
        scanf("%d", &entrada);

        if(entrada == 2){
            printf("Digite o valor em celsius: ");
            scanf("%d", &Celsius);
            Fahrenheit = (Celsius * 1.8) + 32;
            printf("%d° fahrenheit.\n", Celsius);

        }else if(entrada == 1){
            printf("Digite o valor em fahrenheit: ");
            scanf("%d", &Fahrenheit);
            Celsius = ((Fahrenheit - 32) * 5) / 9;
            printf("%d° celsius.\n", Celsius);
        }

    }


    return 0;
}
