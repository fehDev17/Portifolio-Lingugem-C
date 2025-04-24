#include <stdio.h>

int main() {
    
// fazer operações simples de soma, subtração, divisão e multiplicação
    int num1, num2;
    char operador;

    printf("\nDigite o numero: ");
    scanf("%i", &num1);

    if (num1 % 2 == 0) {
        printf("Seu numero é par!\n");
    } else {
        printf("Seu numero é impar!\n");
    }

    printf("Digite os dois numeros: ");
    scanf("%i %i", &num1, &num2);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            printf("Resultado: %d\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %d\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Resultado: %.2f\n", (float)num1 / num2);
            else
                printf("Erro: divisão por zero!\n");
            break;
        default:
            printf("Operador inválido!\n");
    }
    
    
    
// Ver qual o numero maior
 int num4, num5, num6;
    int maior;

    printf("Digite os valores: ");
    scanf("%i %i %i", &num4, &num5, &num6);

    // Determinando o maior número
    maior = num4;

    if (num5 > maior) {
        maior = num5;
    }
    if (num6 > maior) {
        maior = num6;
    }
    printf("Esse é o seu número maior: %i\n", maior);
    
    
// calculando media 

float num7, num8, num9, media;

    printf("Digite suas notas da prova: ");
    scanf("%f %f %f", &num7, &num8, &num9);

    // Verifica se as notas estão dentro de um intervalo válido (0-10)
    if ((num7 >= 0 && num7 <= 10) && (num8 >= 0 && num8 <= 10) && (num9 >= 0 && num9 <= 10)) {
        // Calculando a média
        media = (num7 + num8 + num9) / 3;
        printf("Sua média da prova é: %.2f\n", media);
    } else {
        printf("Valor inválido! As notas devem estar entre 0 e 10.\n");
    }

    return 0;
}
