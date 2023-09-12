#include <stdio.h>       										// Biblioteca de comunicação com o usuário
#include <stdlib.h>      										// Biblioteca de alocação de espaço em memória
#include <locale.h>      										// Biblioteca de alocações de texto por região
#include <string.h>											// Biblioteca responsável por cuidar das strings

int registro()												// int: responsável por cadastrar os usuários no sistema: INICIO
	
	{
	
													// Strings: inicio
	char arquivo[40];										//	chave Primária = CPF
	char cpf[40];											// 	string: CPF	
	char nome[40];											//	string: Nome
	char sobrenome[40];										//	string: Sobrenome
	char cargo[40];											//	string: Cargo
													// Strings: fim
	
	printf ("Digite o CPF a ser cadastrado: ");							// Coletando informação do usuário: CPF
	scanf ("%s", cpf);										// %s refere-se a string
	
	strcpy (arquivo, cpf);										// Função de cópia de valores entre arquivo e cpf
	
	FILE *file;											// Abre o arquivo
	file = fopen (arquivo, "w");									// Escreve no arquivo
	fprintf (file, cpf);										// Salva o valor da variável: char cpf	
	fclose (file);											// Fecha o arquivo
	
	file = fopen (arquivo, "a");									// Abre o arquivo
	fprintf (file, ",");										// Coloca uma virgula entre os dados
	fclose (file);											// Fecha o arquivo
	
	printf ("Digite o nome a ser cadastrado: ");							// Coletando informação do usuário: Nome
	scanf ("%s", nome);										// %s refere-se a string
	
	file = fopen (arquivo, "a");									// Abre o arquivo
	fprintf (file, nome);										// Salva o valor da variável: char nome
	fclose (file);											// Fecha o arquivo
	
	file = fopen (arquivo, "a");									// Abre o arquivo
	fprintf (file, ",");										// Coloca uma virgula entre os dados
	fclose (file);											// Fecha o arquivo
	
	printf ("Digite o sobrenome a ser cadastrado: ");						// Coletando informação do usuário: Sobrenome
	scanf ("%s", sobrenome);									// %s refere-se a string
	
	file = fopen (arquivo, "a");									// Abre o arquivo
	fprintf (file, sobrenome);									// Salva o valor da variável: char sobrenome
	fclose (file);											// Fecha o arquivo
	
	file = fopen (arquivo, "a");									// Abre o arquivo
	fprintf (file, ",");										// Coloca uma virgula entre os dados
	fclose (file);											// Fecha o arquivo
	
	printf ("Digite o cargo a ser cadastrado: ");							// Coletando informação do usuário: Cargo
	scanf ("%s", cargo);										// %s refere-se a string
	
	file = fopen (arquivo, "a");									// Abre o arquivo
	fprintf (file, cargo);										// Salva o valor da variável: char cargo
	fclose (file);											// Fecha o arquivo
	
	system ("pause");										// Pausa o sistema
	
	}												// int: responsável por cadastrar os usuários no sistema: FIM



int consulta()												// int: responsável por consultar os usuários no sistema: INICIO

	{
	
	setlocale (LC_ALL, "Portuguese");								// Seleção de linguagem
	
													// String: inicio
	char cpf[40];											//  	string: CPF
	char conteudo[200];										//  	string: conteudo: while
													// Strings: fim
																				
	printf ("Digite o CPF a ser consultado: ");							// Coletando informação do usuário
	scanf ("%s", cpf);										// %s refere-se a string
	
	FILE *file;											// Abre o arquivo
	file = fopen (cpf, "r");									// Lê o arquivo
	
	if (file == NULL)										// if: para validação dos dados: inicio
		
		{
		printf ("Não foi possível achar o arquivo, não localizado!.\n");			// Mensagem para validação dos dados
		}											// if: para validação dos dados: fim
	
	while ( fgets ( conteudo, 200, file ) != NULL )							// while: para coleta de dados no arquivo: inicio
		
		{
		printf ("\nEssas são as informações do usuário: ");					// Mensagem sobre informações
		printf ("%s", conteudo);								// Mensagem com informações
		printf ("\n\n");									// Pula duas linhas
		}											// while: para coleta de dados no arquivo: fim
	
	system ("pause");										// Pausa o sistema
		
	}												// int: responsável por consultar os usuários no sistema: FIM



int deletar()												// int: responsável por deleter os usuários no sistema: INICIO

	{

	char cpf[40];											// 	string: cpf
	
	printf ("Digite o CPF a ser deletado: ");							// Coletando informação do usuário
	scanf ("%s", cpf);										// %s refere-se a string
	
	remove (cpf);											// Remove os dados no arquivo
	
	FILE *file;											// Abre o arquivo
	file = fopen (cpf, "r");									// Lê o arquivo
	
	if ( file == NULL )										// if: para validação dos dados: inicio
		
		{
		printf ("O usuário não se encontra no sistema!.\n");					// Mensagem de erro
		system ("pause");									// Pausa o sistema
		}											// if: para validação dos dados: fim


	}												// int: responsável por deleter os usuários no sistema: FIM



int main()                                                                      			// FUNÇÃO PRINCIPAL: INICIO

	{	
													// Variaveis: inicio
	int opcao = 0;											// 	int: opcao :  switch
	int laco = 1;											// 	int: laco :  for
	int comparacao;											//	int: comparacao: if
													// Variaveis: fim
													
													// Strings: inicio
	char senhadigitada [] = "a" ;									//	string: senhadigitada: strcmp
													// Strings: fim
		
	printf ("###  Cartório da EBAC  ###\n\n");							// Apresentação	
	printf ("Login de administrador!\n\nDigite sua senha: ");					// Menu: coleta de senha
	scanf ("%s", senhadigitada);									// Coleta da senha

	comparacao = strcmp ( senhadigitada, "admin" );							// Função de comparação de valores entre senhadigitada e "admin": if
		
	if ( comparacao == 0 )										// if: confirmação de senha: inicio

		{
		system ("cls");										// Comando para limpar a tela
		for ( laco = 1 ; laco = 1 ;)								// for: para repetição do menu: inicio
	
			{																		
	
			system ("cls");									// Comando para limpar a tela
		
			setlocale (LC_ALL, "Portuguese");						// Seleção de linguagem
	
			printf ("###  Cartório da EBAC  ###\n\n");					// Apresentação
			printf ("Escolha a opção desejada do menu: \n\n");				// Início do menu
			printf ("\t1 - Registrar nomes\n");						// 	Menu: Registrar nomes
			printf ("\t2 - Consultar nomes\n");						// 	Menu: Consulta nomes
			printf ("\t3 - Deletar nomes\n\n");						// 	Menu: Deletar nomes
			printf ("\t4 - Sair do sistema\n\n");						//	Menu: Sair do sistema
			printf ("Opção: \n\n");								// Fim do menu

			scanf ("%d", &opcao);								// Armazenamendo a escolha
	
			system ("cls");									// Comando para limpar a tela


			switch (opcao)									// switch: Inicio da seleção
		
				{
				
				case 1:									// Chamada de função: Registro
				registro();															
				break;
			
				case 2:									// Chamada de função: Consulta
				consulta();
				break;
			
				case 3:									// Chamada de função: Deletar
				deletar();
				break;

				case 4:									// Chamada de função: Sair do sistema
				printf ("Obrigado por utilizar o sistema!\n");
				return 0;
				break;
			
				default:								// Chamada de função: Erro
				printf ("Essa opção não está disponivel!\n");
				system ("pause");
				break;
			
				}
													// switch: Fim da Seleção
			}										// for: para repetição do menu: fim
		}											// if: confirmação de senha: fim
	
	else												// else: erro na confirmação de senha
		printf("Senha incorreta!");								// Mensagem de erro
		
	}												// FUNÇÃO PRINCIPAL: FIM
