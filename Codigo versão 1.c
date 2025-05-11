#include <stdio.h>

int main() {
    float num1, num2, num3, num4, media;

    // Solicita ao usuário que digite os 4 números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    printf("Digite o quarto número: ");
    scanf("%f", &num4);

    // Calcula a média aritmética
    media = (num1 + num2 + num3 + num4) / 4;

    // Exibe o resultado
    printf("A média aritmética é: %.2f\n", media);

    return 0;
}
