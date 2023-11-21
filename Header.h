/*
 * Header.h
 *
 *  Created on: 20 de nov. de 2023
 *      Author: Bruno Xavier
 */

#ifndef HEADER_H_
#define HEADER_H_
#define MATALEATORIO rand() % 1000

typedef struct dependente{
	char nome[50];
	int cod;
	char dtNasc[12];
	char parente;
}dependente;


typedef struct funcionario{
	char nome[50];
	int matricula;
	char dtNasc[12];
	char dtAdmin[12];
	char cargo;
	float salario;
	int QtdeDenp;
	dependente *dadosDenp;
}funcionario;


//prototipo
void menu();
void cadastrarNome(char *nome);
char* cadastrarNascimento();
char* cadastrarAdmissao();
void cadastrarCargo(char *cargo);



#endif /* HEADER_H_ */
