#include <stdio.h>
#include <stdlib.h>

// Defini��o da fun��o potenciaRecursiva
double potenciaRecursiva(double base, int expoente) {
    // Caso base: Se o expoente for 1, base^1 � a pr�pria base.
    if (expoente == 1) {
        return base;
    }
    // Passo recursivo: base^expoente = base * base^(expoente-1)
    else {
        if (expoente <= 0) {
             return base * potenciaRecursiva(base, expoente - 1);
        }
        return base * potenciaRecursiva(base, expoente - 1);
    }
}

int main() {
    double baseUsuario;
    int expoenteUsuario;

    printf("Digite o valor da base (ex: 2.5): ");
    if (scanf("%lf", &baseUsuario) != 1) {
        printf("Erro ao ler o valor da base.\n");
        return 1; // Termina o programa indicando um erro
    }

    printf("Digite o valor do expoente (um n�mero inteiro positivo, ex: 3): ");
    if (scanf("%d", &expoenteUsuario) != 1) {
        printf("Erro ao ler o valor do expoente.\n");
        return 1; // Termina o programa indicando um erro
    }

    // Verifica se o expoente � positivo, conforme a premissa da fun��o potenciaRecursiva
    if (expoenteUsuario <= 0) {
        printf("Erro: O expoente deve ser um n�mero inteiro positivo.\n");
        return 1; // Termina o programa indicando um erro
    }

    double resultado = potenciaRecursiva(baseUsuario, expoenteUsuario);

    // Exibe o resultado
    printf("%.2f elevado a %d � %.2f\n", baseUsuario, expoenteUsuario, resultado);

    return 0; 
}
