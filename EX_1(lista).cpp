#include <stdio.h>
#include <stdlib.h>
#include <time.h> // biblioteca time

// Função recursiva que soma 'n' 
int somar_recursiva(int f) {
    if (f == 0)
        return 0;
    return (rand() % 6 + 1) + somar_recursiva(f - 1);
}

int num_aleatorio_2_a_12() {
    return somar_recursiva(2);
}

int main() {
    srand(time(NULL));

    int num = num_aleatorio_2_a_12();
    printf("Número aleatório entre 2 e 12: %d\n", num);

    return 0;
}
