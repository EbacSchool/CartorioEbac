#include <stdio.h>       														// Biblioteca de comunica��o com o usu�rio
#include <stdlib.h>      														// Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>      														// Biblioteca de aloca��es de texto por regi�o
#include <string.h>																// Biblioteca respons�vel por cuidar das strings

int registro()																	// int: respons�vel por cadastrar os usu�rios no sistema: INICIO
	
	{
	
																				// Strings: inicio
	char arquivo[40];															//		chave Prim�ria = CPF
	char cpf[40];																// 		string: CPF	
	char nome[40];																//		string: Nome
	char sobrenome[40];															//		string: Sobrenome
	char cargo[40];																//		string: Cargo
																				// Strings: fim
	
	printf ("Digite o CPF a ser cadastrado: ");									// Coletando informa��o do usu�rio: CPF
	scanf ("%s", cpf);															// %s refere-se a string
	
	strcpy (arquivo, cpf);														// Respons�vel por copiar os valores das strings: char cpf em char arquivo
	
	FILE *file;																	// Abre o arquivo
	file = fopen (arquivo, "w");												// Escreve no arquivo
	fprintf (file, cpf);														// Salva o valor da vari�vel: char cpf	
	fclose (file);																// Fecha o arquivo
	
	file = fopen (arquivo, "a");												// Abre o arquivo
	fprintf (file, ",");														// Coloca uma virgula entre os dados
	fclose (file);																// Fecha o arquivo
	
	printf ("Digite o nome a ser cadastrado: ");								// Coletando informa��o do usu�rio: Nome
	scanf ("%s", nome);															// %s refere-se a string
	
	file = fopen (arquivo, "a");												// Abre o arquivo
	fprintf (file, nome);														// Salva o valor da vari�vel: char nome
	fclose (file);																// Fecha o arquivo
	
	file = fopen (arquivo, "a");												// Abre o arquivo
	fprintf (file, ",");														// Coloca uma virgula entre os dados
	fclose (file);																// Fecha o arquivo
	
	printf ("Digite o sobrenome a ser cadastrado: ");							// Coletando informa��o do usu�rio: Sobrenome
	scanf ("%s", sobrenome);													// %s refere-se a string
	
	file = fopen (arquivo, "a");												// Abre o arquivo
	fprintf (file, sobrenome);													// Salva o valor da vari�vel: char sobrenome
	fclose (file);																// Fecha o arquivo
	
	file = fopen (arquivo, "a");												// Abre o arquivo
	fprintf (file, ",");														// Coloca uma virgula entre os dados
	fclose (file);																// Fecha o arquivo
	
	printf ("Digite o cargo a ser cadastrado: ");								// Coletando informa��o do usu�rio: Cargo
	scanf ("%s", cargo);														// %s refere-se a string
	
	file = fopen (arquivo, "a");												// Abre o arquivo
	fprintf (file, cargo);														// Salva o valor da vari�vel: char cargo
	fclose (file);																// Fecha o arquivo
	
	system ("pause");															// Pausa o sistema
	
	}																			// int: respons�vel por cadastrar os usu�rios no sistema: FIM



int consulta()																	// int: respons�vel por consultar os usu�rios no sistema: INICIO

	{
	
	setlocale (LC_ALL, "Portuguese");											// Sele��o de linguagem
	
																				// String: inicio
	char cpf[40];																//  	string: CPF
	char conteudo[200];															//  	string: conteudo: while
																				// Strings: fim
																				
	printf ("Digite o CPF a ser consultado: ");									// Coletando informa��o do usu�rio
	scanf ("%s", cpf);															// %s refere-se a string
	
	FILE *file;																	// Abre o arquivo
	file = fopen (cpf, "r");													// L� o arquivo
	
	if (file == NULL)															// if: para valida��o dos dados: inicio
		
		{
		printf ("N�o foi poss�vel achar o arquivo, n�o localizado!.\n");		// Mensagem para valida��o dos dados
		}																		// if: para valida��o dos dados: fim
	
	while ( fgets ( conteudo, 200, file ) != NULL )								// while: para coleta de dados no arquivo: inicio
		
		{
		printf ("\nEssas s�o as informa��es do usu�rio: ");						// Mensagem sobre informa��es
		printf ("%s", conteudo);												// Mensagem com informa��es
		printf ("\n\n");														// Pula duas linhas
		}																		// while: para coleta de dados no arquivo: fim
	
	system ("pause");															// Pausa o sistema
		
	}																			// int: respons�vel por consultar os usu�rios no sistema: FIM



int deletar()																	// int: respons�vel por deleter os usu�rios no sistema: INICIO

	{

	char cpf[40];																// 		string: cpf
	
	printf ("Digite o CPF a ser deletado: ");									// Coletando informa��o do usu�rio
	scanf ("%s", cpf);															// %s refere-se a string
	
	remove (cpf);																// Remove os dados no arquivo
	
	FILE *file;																	// Abre o arquivo
	file = fopen (cpf, "r");													// L� o arquivo
	
	if ( file == NULL )															// if: para valida��o dos dados: inicio
		
		{
		printf ("O usu�rio n�o se encontra no sistema!.\n");					// Mensagem de erro
		system ("pause");														// Pausa o sistema
		}																		// if: para valida��o dos dados: fim


	}																			// int: respons�vel por deleter os usu�rios no sistema: FIM



int main()                                                                      // FUN��O PRINCIPAL: INICIO

	{	
																				// Variaveis: inicio
	int opcao = 0;																// 		int: opcao :  switch
	int laco = 1;																// 		int: laco :  for
																				// Variaveis: fim
	
	for ( laco = 1 ; laco = 1 ;)												// for: para repeti��o do menu: inicio
	
		{																		
	
		system ("cls");															// Comando para limpar a tela
		
		setlocale (LC_ALL, "Portuguese");										// Sele��o de linguagem
	
		printf ("###  Cart�rio da EBAC  ###\n\n");								// Apresenta��o
		printf ("Escolha a op��o desejada do menu: \n\n");						// In�cio do menu
		printf ("\t1 - Registrar nomes\n");										// 	Menu: Registrar nomes
		printf ("\t2 - Consultar nomes\n");										// 	Menu: Consulta nomes
		printf ("\t3 - Deletar nomes\n\n");										// 	Menu: Deletar nomes
		printf ("Op��o: \n\n");													// Fim do menu

		scanf ("%d", &opcao);													// Armazenamendo a escolha
	
		system ("cls");															// Comando para limpar a tela


		switch (opcao)															// switch: Inicio da sele��o
		
			{
				
			case 1:																// CHamada de fun��o: Registro
			registro();															
			break;
			
			case 2:																// CHamada de fun��o: Consulta
			consulta();
			break;
			
			case 3:																// CHamada de fun��o: Deletar
			deletar();
			break;
			
			
			default:															// Chamada de fun��o: Erro
			printf ("Essa op��o n�o est� disponivel!\n");
			system ("pause");
			break;
			
			}
																				// switch: Fim da Sele��o
		}																		// for: para repeti��o do menu: fim
		
	}																			// FUN��O PRINCIPAL: FIM
