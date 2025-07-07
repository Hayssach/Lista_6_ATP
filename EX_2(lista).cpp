#include<stdio.h>
#include <stdlib.h>

int somar_recursiva(int h) {
    if (h <= 1) {
        return h; // Caso base: se h é 1 ou 0, retorna h
    }
    return h + somar_recursiva(h - 1);
}

int main(){
	int m;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &m);

    if (m < 0) {
        printf("Número inválido! Informe um valor positivo.\n");
    } else {
        int r = somar_recursiva(m);
        printf("A soma de 1 até %d é %d\n", m, r);
    }
    getchar();
    return 0;
}
