#include <stdio.h> //Lucas Aguiar Da Silva                             

// Protótipo da função para calcular a soma
int calcularSoma(int vetor[], int tamanho);

int main() {
    int numeros[3];
    int i, soma;

    // Solicita os números ao usuário
    printf("Digite 3 numeros inteiros:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &numeros[i]);
    }

    // Chama a função para calcular a soma e armazena o resultado
    soma = calcularSoma(numeros, 3);

    // Exibe a soma
    printf("A soma dos valores e: %d\n", soma);

    return 0;
}

// Função para calcular a soma dos elementos do vetor
int calcularSoma(int vetor[], int tamanho) {
    int i, soma = 0;
    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}
