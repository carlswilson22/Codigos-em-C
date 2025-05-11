#include <stdio.h>

int main() {
    float salario_atual, percentual_aumento, novo_salario, aumento;

    // Entrada do salário atual
    printf("Digite o salario atual: ");
    scanf("%f", &salario_atual);

    // Entrada do percentual de aumento
    printf("Digite o percentual de aumento (ex: 10 para 10%%): ");
    scanf("%f", &percentual_aumento);

    // Calcula o valor do aumento
    aumento = salario_atual * (percentual_aumento / 100);

    // Calcula o novo salário
    novo_salario = salario_atual + aumento;

    // Exibe os resultados
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}
