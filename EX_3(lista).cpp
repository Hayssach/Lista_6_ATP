#include <stdlib.h>
#include <stdio.h>

// função para contar os dígitos 
int contar_digitos(int m){
	if(m < 0 ) m = -m;
	
	if(m < 10){
		return (1);
	}
	return 1 + contar_digitos(m / 10);
}
int main(){
	int num;
	printf("Digite um numero inteiro:");
	scanf("%d", &num);
	
	int quantidade = contar_digitos(num);
	printf("O numero %d tem %d digitos.\n", num, quantidade);
	
	getchar();
	return(0);
}
