#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função recursiva que soma 'n' números aleatórios de 1 a 6
int soma_recursiva(int k) {
    if (k == 0)
        return 0;
    return (rand() % 6 + 1) + soma_recursiva(k - 1);
}

int numero_aleatorio_2_a_12() {
    return soma_recursiva(2);
}

int main() {
    srand(time(NULL));

    int numero = numero_aleatorio_2_a_12();
    printf("Número aleatório entre 2 e 12: %d\n", numero);

    return 0;
}
