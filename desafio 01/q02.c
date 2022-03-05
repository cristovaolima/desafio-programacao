/* 
	Copyright 2022 Cristovão Lima
	
	Débora se inscreveu em uma rede social para se manter em contato com seus amigos. A
	página de cadastro exigia o preenchimento dos campos de nome e senha, porém a senha precisa ser
	forte. O site considera uma senha forte quando ela satisfaz os seguintes critérios:
		● Possui no mínimo 6 caracteres.
		● Contém no mínimo 1 dígito.
		● Contém no mínimo 1 letra em minúsculo.
		● Contém no mínimo 1 letra em maiúsculo.
		● Contém no mínimo 1 caractere especial. Os caracteres especiais são: !@#$%^&*()-+
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
	
	char senha[100];
	
	printf("A senha deve conter: \n\n");
	
	printf("> No minimo 6 caracteres; \n");
	printf("> No minimo 1 digito; \n");
	printf("> No minimo 1 letra em minusculo; \n");
	printf("> No minimo 1 letra em maiusculo; \n");
	printf("> No minimo 1 caractere especial. \n\n");
	
	printf("Informe a senha: ");
	scanf("%s", &senha);
	printf("\nSenha = %s \n", senha);
	
	/* Verifica se a string tem no minimo 6 caracteres. */
	if(strlen(senha) < 6){
		printf("\nSenha deve ter no minimo 6 caracteres\n\n");
	}	
	
	system("PAUSE");
	return 0;
}

