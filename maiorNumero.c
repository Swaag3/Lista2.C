#include <stdio.h> //Lucas Aguiar Da Silva

// Protótipo da função para encontrar o maior número
int encontrarMaior(int num1, int num2);

int main() {
    int num1, num2, maior;

    // Solicita os números ao usuário
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Chama a função para encontrar o maior número e armazena o resultado
    maior = encontrarMaior(num1, num2);

    // Exibe o resultado
    printf("O maior numero e: %d\n", maior);

    return 0;
}

// Função para encontrar o maior número
int encontrarMaior(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}
