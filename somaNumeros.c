#include <stdio.h> //lucas Aguiar Da Silva

// Protótipo da função para calcular a soma
int calcularSoma(int num1, int num2);

int main() {
    int numero1, numero2, resultado;

    // Solicita os números ao usuário
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    // Chama a função para calcular a soma e armazena o resultado
    resultado = calcularSoma(numero1, numero2);

    // Exibe o resultado
    printf("A soma de %d e %d e: %d\n", numero1, numero2, resultado);

    return 0;
}

// Função para calcular a soma de dois números
int calcularSoma(int num1, int num2) {
    int soma = num1 + num2;
    return soma;
}
