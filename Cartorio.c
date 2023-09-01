#include <stdio.h>       //biblioteca de comunicação com o usuário
#include <stdlib.h>      //biblioteca de alocação de espaço em memória
#include <locale.h>      //biblioteca de alocações de texto por região

int main()
{
	
	setlocale(LC_ALL, "Portuguese");						//seleção de linguagem
	
	printf ("###  Cartório da EBAC  ###\n\n");				//apresentação
	printf ("Escolha a opção desejada do menu: \n\n");		//início do menu
	printf ("\t1 - Registrar nomes\n");
	printf ("\t2 - Consultar nomes\n");
	printf ("\t3 - Deletar nomes\n\n");
	printf("Esse Software é de livre uso dos alunos\n");

	
	
	
}
