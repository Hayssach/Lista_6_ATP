#include <stdlib.h>
#include <stdio.h>

int conta_digitos(int n){
	if(n < 0 ) n = -n;
	
	if(n < 10){
		return (1);
	}
	return 1 + conta_digitos(n / 10);
}
int main(){
	int numero;
	printf("Digite um numero inteiro:");
	scanf("%d", &numero);
	
	int qdt = conta_digitos(numero);
	printf("O numero %d tem %d digitos.\n", numero, qdt);
	
	getchar();
	return(0);
}
