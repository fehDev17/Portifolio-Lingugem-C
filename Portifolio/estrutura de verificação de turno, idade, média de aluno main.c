#include <stdio.h>

int main()
{
    int opcao;
    char turno, materias;
    int idade;
    float num1, num2, num3, media;

    printf("===== MENU ESCOLAR =====\n");
    printf("1 - Ver turno do aluno\n");
    printf("2 - Verificar idade\n");
    printf("3 - Calcular média e verificar recuperação\n");
    printf("4 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nDigite qual o seu turno: M - matutino | V - vespertino | N - noturno: ");
            scanf(" %c", &turno);
            switch (turno) {
                case 'M':
                case 'm':
                    printf("\nBom dia!\n");
                    break;
                case 'V':
                case 'v':
                    printf("\nBoa tarde!\n");
                    break;
                case 'N':
                case 'n':
                    printf("\nBoa noite!\n");
                    break;
                default:
                    printf("\nTurno inválido!\n");
                    return 0;
            }
            // continua para os próximos passos
        case 2:
            printf("\nInforme sua idade: ");
            scanf("%d", &idade);
            if (idade >= 18) {
                printf("Aluno maior de idade!\n");
            } else {
                printf("Aluno menor de idade!\n");
            }
            // continua para os próximos passos
        case 3:
            printf("\nDigite suas notas: ");
            scanf("%f %f %f", &num1, &num2, &num3);
            media = (num1 + num2 + num3) / 3;

            if (media >= 6) {
                printf("Aluno aprovado! Média: %.2f\n", media);
            } else {
                printf("Aluno de recuperação! Média: %.2f\n", media);
                printf("\nEscolha qual matéria deseja fazer recuperação:\n");
                printf("P - Programação de Sistemas\n");
                printf("M - Modelagem de Requisitos\n");
                printf("A - Arquitetura de Computadores\n");
                printf("Digite a letra: ");
                scanf(" %c", &materias);
                switch (materias) {
                    case 'P':
                    case 'p':
                        printf("Sua recuperação só pode ser feita se tiver média 4,3\n");
                        break;
                    case 'M':
                    case 'm':
                        printf("Sua recuperação só pode ser feita com média 4,01\n");
                        break;
                    case 'A':
                    case 'a':
                        printf("Sua recuperação só pode ser feita se tiver média 4,00\n");
                        break;
                    default:
                        printf("Matéria inválida!\n");
                        break;
                }
            }
            break;
        case 4:
            printf("Saindo do programa...\n");
            return 0;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    return 0;
}
