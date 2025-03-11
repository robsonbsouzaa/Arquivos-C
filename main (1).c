#include <stdio.h>
#include <locale.h>

int main() {
    int opcao;
    float nota1, nota2, nota3, nota4, media;

    printf("Selecione a matéria (1-4):\n");
    printf("1. Portugues\n");
    printf("2. Matematica\n");
    printf("3. Biologia\n");
    printf("4. Ciencias\n");
    printf("Digite a opção (1-4): ");
    scanf("%d", &opcao);

    // Escolha da matéria com base na opção
    switch(opcao) {
        case 1:
            printf("\nVocê escolheu Portugues!\n");
            printf("Digite a nota da primeira avaliação: ");
            scanf("%f", &nota1);
            printf("Digite a nota da segunda avaliação: ");
            scanf("%f", &nota2);
            printf("Digite a nota da terceira avaliação: ");
            scanf("%f", &nota3);
            printf("Digite a nota da quarta avaliação: ");
            scanf("%f", &nota4);
            break;

        case 2:
            printf("\nVocê escolheu Matemática!\n");
            printf("Digite a nota da primeira avaliação: ");
            scanf("%f", &nota1);
            printf("Digite a nota da segunda avaliação: ");
            scanf("%f", &nota2);
            printf("Digite a nota da terceira avaliação: ");
            scanf("%f", &nota3);
            printf("Digite a nota da quarta avaliação: ");
            scanf("%f", &nota4);
            break;

        case 3:
            printf("\nVocê escolheu Biologia!\n");
            printf("Digite a nota da primeira avaliação: ");
            scanf("%f", &nota1);
            printf("Digite a nota da segunda avaliação: ");
            scanf("%f", &nota2);
            printf("Digite a nota da terceira avaliação: ");
            scanf("%f", &nota3);
            printf("Digite a nota da quarta avaliação: ");
            scanf("%f", &nota4);
            break;

        case 4:
            printf("\nVocê escolheu Ciências!\n");
            printf("Digite a nota da primeira avaliação: ");
            scanf("%f", &nota1);
            printf("Digite a nota da segunda avaliação: ");
            scanf("%f", &nota2);
            printf("Digite a nota da terceira avaliação: ");
            scanf("%f", &nota3);
            printf("Digite a nota da quarta avaliação: ");
            scanf("%f", &nota4);
            break;

        default:
            printf("Opção inválida! Programa encerrado.\n");
            return 1;  // Encerra o programa caso a opção seja inválida
    }

    // Calcular a média
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    // Exibir a média
    printf("\nMédia final: %.2f\n", media);

    // Verificar o conceito e aprovação do aluno
    if (media >= 9.0) {
        printf("Conceito: A\n");
        if (media >= 6.0) {
            printf("Status: Aprovado\n");
        } else {
            printf("Status: Reprovado\n");
        }
    } else if (media >= 7.5) {
        printf("Conceito: B\n");
        if (media >= 6.0) {
            printf("Status: Aprovado\n");
        } else {
            printf("Status: Reprovado\n");
        }
    } else if (media >= 6.0) {
        printf("Conceito: C\n");
        if (media >= 6.0) {
            printf("Status: Aprovado\n");
        } else {
            printf("Status: Reprovado\n");
        }
    } else if (media >= 4.0) {
        printf("Conceito: D\n");
        if (media >= 6.0) {
            printf("Status: Aprovado\n");
        } else {
            printf("Status: Reprovado\n");
        }
    } else {
        printf("Conceito: E\n");
        printf("Status: Reprovado\n");
    }

    return 0;
}
