#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#define ACESSO 123
#define BANHO1 30.00
#define BANHO2 35.00
#define BANHO3 40.00
#define BANHO4 45.00
#define RC 12.5
#define RG 10.0
#define VAC 70.0
#define REM 30.1
main(){
	setlocale(LC_ALL,"");
	int senha,opcao,produto,qtde=0,contRC=0,contRG=0,contVAC=0,contREM=0;
	float peso=0,valorBanho=0,totalNota=0;	
	printf("Informe a senha do sistema: ");
	scanf("%i",&senha);
	if(senha==ACESSO){
		printf("\n\t Acesso liberado!\n");
		do{
			printf("\n1. Banho e tosa");
			printf("\n2. Compra de produtos");
			printf("\n3. Gerar nota fiscal");
			printf("\n4. Zerar nota fiscal");
			printf("\n0. Encerrar o sistema ==> ");	
			scanf("%i",&opcao);
			switch(opcao){
				case 1:
					system("cls");
					do{
						printf("Informe o peso do animal; ");
						scanf("%f",&peso);
						if(peso<=0) printf("\n\t ==> Peso inválido! Digite novamente!\n")	;
					}while(peso<=0);
					if(peso<=5) valorBanho=BANHO1;
					else if(peso<=10) valorBanho=BANHO2;
					else if(peso<=15) valorBanho=BANHO3;
					else if(peso<=20) valorBanho=BANHO4;
					else valorBanho = BANHO4+peso;
					printf("\n\t ==> Banho lançado com sucesso!!!\n");
					system("pause");
				break;
				case 2:
					system("cls");
					do{
						printf("\n1. RAÇÃO PARA GATOS (2KGS)");
						printf("\n2. RAÇÃO PARA CÃES (2KGS)");
						printf("\n3. REMEDIO A23");
						printf("\n4. VACINA B87\n ==> ");	
						scanf("%i",&produto);
						if(produto<1 || produto>4) printf("\n\t => Código inválido! Informe novamente!\n");
					}while(produto<1 || produto>4);
					do{
						printf("\nInforme a quantidade: ");
						scanf("%i",&qtde);
						if(qtde<=0) printf("\n\t ==> Qtde inválida! Informe novamente!!\n")	;
					}while(qtde<=0);
					switch(produto){
						case 1:
							contRG+=qtde;
							printf("\n\t ==> Inserido na nota %i ração para gato!",qtde);
						break;
						case 2:
							contRC+=qtde;
							printf("\n\t ==> Inserido na nota %i ração para cães!",qtde);
						break;
						case 3:
							contREM+=qtde;
							printf("\n\t ==> Inserido na nota %i Remédio A23!",qtde);
						break;
						case 4:
							contVAC+=qtde;
							printf("\n\t ==> Inserido na nota %i Vacina B87!",qtde);
						break;
					}
					printf("\n");
					system("pause");
				break;
				
				case 3:
					system("cls");
					totalNota=0;
					if(peso>0 || qtde>0){
						if(peso>0){
							printf("\n\tBanho e Tosa\t\t%.2f",valorBanho);
							totalNota+=	valorBanho;
						} 
						if(contRG>0){
							printf("\n%i\tRação para Gato\t\t%.2f",contRG,contRG*RG);	
							totalNota+=	contRG*RG;
						} 
						if(contRC>0){
							printf("\n%i\tRação para Cães\t\t%.2f",contRC,contRC*RC);
							totalNota+=	contRC*RC;	
						} 
						if(contREM>0){
							printf("\n%i\t\tRemédio A23\t\t%.2f",contREM,contREM*REM);
							totalNota+=	contREM*REM;	
						} 
						if(contVAC>0){
							printf("\n%i\tVacina  B87\t\t%.2f",contVAC,contVAC*VAC);
							totalNota+=	contVAC*VAC;	
						} 
						printf("\n\t\tTotal Nota\t\t%.2f\n\n",totalNota);
					}else{
						printf("\n\t ==> Nenhum produto vendido!!\n");
					}
					printf("\n");
					system("pause");
				break;
				system("cls");
				case 4:
					qtde=contRC=contRG=contVAC=contREM=peso=valorBanho=totalNota=0;
					printf("\n Pronto para novo lançamento!");
					printf("\n");
					system("pause");
				break;
				case 0:
				break;
				default: printf("\n\t ==> Opção inválida! Escolha novamente!\n");
			}
		}while(opcao!=0);
	}else{
		printf("\n\t SENHA INCORRETA!\n");
	}
}

