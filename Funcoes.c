/*
 * Funcoes.c
 *
 *  Created on: 20 de nov. de 2023
 *      Author: Bruno Xavier
 */

#include "Header.h"
void menu(){
	char op;
	funcionario *funcionarios = (funcionario*) malloc(sizeof(funcionario) * 5);

	do{
		printf("A - Inserir funcionario\n");
		printf("B - excluir dados\n");
		printf("C - Alterar dados\n");
		printf("D - Relatorios\n");
		printf("E - Finalizar\n");
		scanf(" %c", &op);

		switch (op){
		case 'A':

			cadastraFuncionario(funcionarios);
			break;
		case 'B':
			break;
		case 'C':
			break;
		case 'D':
			break;
		case 'E':
			printf("Finalizado\n");
			break;
		default:
			printf("Insira um caracter valido\n");
			break;
		}

	}while(op != 'E');

}

void cadastraFuncionario(funcionario funcionario){
	cadastrarNome(funcionario.nome);
	funcionario.dtNasc = cadastrarNascimento();



}

void cadastrarNome(char *nome){
	printf("Insira seu nome: ");
	scanf("%s", nome);
}

char* cadastrarNascimento(){
	char data[12];
	char *pontData = data;
	printf("Insira a data de nascimento dd/mm/aaaa: ");
	scanf("%s", &data);
	return pontData;
}


char* cadastrarAdmissao(){
	char data[12];

	printf("Insira a data de nascimento dd/mm/aaaa: ");
	scanf("%s", &data);

}

void cadastrarCargo(char *cargo){

}


/*
char subStringData(char *data, int *dia, int *mes, int *ano){

	strncpy(data, dia, 2);
	for(int i = 0; i < 10; i++){

	}
}
*/
