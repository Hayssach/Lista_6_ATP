#include<stdio.h>
#include <stdlib.h>

int soma_recursiva(int n) {
    if (n <= 1) {
        return n; // Caso base: se n � 1 ou 0, retorna n
    }
    return n + soma_recursiva(n - 1); // Chamada recursiva
}

int main(){
	int n;
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("N�mero inv�lido! Informe um valor positivo.\n");
    } else {
        int resultado = soma_recursiva(n);
        printf("A soma de 1 at� %d � %d\n", n, resultado);
    }

    return 0;
}
