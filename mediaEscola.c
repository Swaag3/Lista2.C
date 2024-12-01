#include <stdio.h> //Lucas Aguiar Da Silva

float mediaTurma(int numAlunos) {
    float soma = 0, nota;
    for (int i = 0; i < numAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }
    return soma / numAlunos;
}
float mediaEscola(int numTurmas) {
    float somaTurmas = 0;
    for (int i = 0; i < numTurmas; i++) {
        printf("\nTurma %d:\n", i + 1);
        int numAlunos;
        printf("Digite o número de alunos: ");
        scanf("%d", &numAlunos);
        float mediaTurmaAtual = mediaTurma(numAlunos);
        printf("A média da turma %d é: %.2f\n", i + 1, mediaTurmaAtual);
        somaTurmas += mediaTurmaAtual;
    }
    return somaTurmas / numTurmas;
}
int main() {
    int numTurmas;
    printf("Digite o número de turmas: ");
    scanf("%d", &numTurmas);
    float mediaGeral = mediaEscola(numTurmas);
    printf("\nA média geral da escola é: %.2f\n", mediaGeral);
    return 0;
}
