#include <stdio.h>

int main() {
    float num1, num2, num3, num4, media;

    // Solicita ao usu�rio que digite os 4 n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);

    printf("Digite o terceiro n�mero: ");
    scanf("%f", &num3);

    printf("Digite o quarto n�mero: ");
    scanf("%f", &num4);

    // Calcula a m�dia aritm�tica
    media = (num1 + num2 + num3 + num4) / 4;

    // Exibe o resultado
    printf("A m�dia aritm�tica �: %.2f\n", media);

    return 0;
}
