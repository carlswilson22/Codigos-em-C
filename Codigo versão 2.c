#include <stdio.h>

int main() {
    float num1, num2, num3, num4;
    float peso1, peso2, peso3, peso4;
    float soma_ponderada, soma_pesos, media_ponderada;

    // Leitura dos valores e seus respectivos pesos
    printf("Digite o primeiro numero e seu peso: ");
    scanf("%f %f", &num1, &peso1);

    printf("Digite o segundo numero e seu peso: ");
    scanf("%f %f", &num2, &peso2);

    printf("Digite o terceiro numero e seu peso: ");
    scanf("%f %f", &num3, &peso3);

    printf("Digite o quarto numero e seu peso: ");
    scanf("%f %f", &num4, &peso4);

    // C�lculo da m�dia ponderada
    soma_ponderada = (num1 * peso1) + (num2 * peso2) + (num3 * peso3) + (num4 * peso4);
    soma_pesos = peso1 + peso2 + peso3 + peso4;
    media_ponderada = soma_ponderada / soma_pesos;

    // Exibe o resultado
    printf("A media ponderada e: %.2f\n", media_ponderada);

    return 0;
}
