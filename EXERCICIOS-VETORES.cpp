#include <stdio.h>
#include <string.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"");
	char nome[50];
	char apelido[50]="FLAVIO";
	char resposta;
	
	printf("\n Informe o nome ==> ");
	fflush(stdin); //este comando serve para zerar a as entradas de dados para evitar que haja sobreposição de variáveis//
	gets(nome); //este comando serve para atribuir strings com vários caracteres como vetores em posições especificadas para cada letra//
	printf("\n Você é gremista? S/N");
	fflush(stdin); 
	scanf("%c",&resposta);
	if (resposta == 'S')printf("\n Tri da américa");
	else printf("\n SOFREDOR!!");
	
	strcpy(string_destino,string_origem); //esse comanda da biblioteca de funções de string serve para atribuir o contéudo de uma string para outra//
	strcat(string_destino,string_origem); //esse comando serve para atribuir o conteúdo da variável origem no final da variável destino. Exemplo campos de preenchimento nome e sobrenome//
	strlen();
	strcmp(string1,string2); //serve para criar uma comparação entre duas string para ver se ambas são identicas.//
	toupper; //transforma um caractere digitado em minúsculo em maiúsculo. Esse tipo de função ajuda na hora de transformar os dados de forma igual para mandar para o banco de dados.//
	tolower; //transforma um caractere digitado em maiúsculo em minuscúlo//
	isalnum; //verifica se o caracter ou inteiro passado como parâmetro é alfanumérico. Isso inclui todos os números//
	isalpha; //verifica se o caracter
	isspace; //verifica se o caracter dentro de uma string é um espaço em branco, é póssivel utilizar para substituir espaços em branco por algo//
	islower;
	isupper;
	
	
	
	
	
	
	
	
}
