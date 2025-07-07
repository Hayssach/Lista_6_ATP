#include <stdio.h>
#include <stdlib.h>

// Função potenciaRecursiva
double potenciaRecursiva(double b, int exp) {
    // Caso b: Se o exp for 1, b^1 é o próprio b.
    if (exp == 1) {
        return b;
    }
    // base^expoente = base * base^(expoente-1)
    else {
        if (exp <= 0) {
             return b * potenciaRecursiva(b, exp - 1);
        }
        return b * potenciaRecursiva(b, exp - 1);
    }
}

int main() {
    double bUsuario;
    int expUsuario;

    printf("Digite o valor da base (ex: 2.5): ");
    if (scanf("%lf", &bUsuario) != 1) {
        printf("Erro ao ler o valor da base.\n");
        return 1; // Termina o programa indicando um erro
    }

    printf("Digite o valor do expoente (um número inteiro positivo, ex: 3): ");
    if (scanf("%d", &expUsuario) != 1) {
        printf("Erro ao ler o valor do expoente.\n");
        return 1; 
    }

    // Verifica se o expoente é positivo
    if (expUsuario <= 0) {
        printf("Erro: O expoente deve ser um número inteiro positivo.\n");
        return 1; 
    }

    double r = potenciaRecursiva(baseUsuario, expoenteUsuario);


    printf("%.2f elevado a %d é %.2f\n", bUsuario, expUsuario, r);

    return 0; 
}
