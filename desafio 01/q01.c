/* 
	Copyright 2022 Cristovão Lima
	
	Escreva um algoritmo que mostre na tela uma escada de tamanho n utilizando o caractere
	e espaços. A base e altura da escada devem ser iguais ao valor de n. A última linha não deve conter
	nenhum espaço.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n;
	printf("Informe o numero: ");
	scanf("%d", &n);
	printf("Numero = %d \n", n);
	
	/* Gera a escada com o valor informado. */
	for(int i = 0; i < n; i++){
		for(int j = 1; j <= i + 1; j++){
			printf("*");
		}
		printf("\n");
	}
	
	system("PAUSE");
	return 0;
}

