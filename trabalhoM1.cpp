#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL,"portuguese");
	char nome[50];
	float sal1, sal2, sal3;
	float saldo_medio;
	float credito;
	printf("\nInforme o nome do cliente:\n");
	gets(nome);
	printf("\n Informe o Saldo dos 3 ultimos meses:\n");
	scanf("%f",&sal1);
	scanf("%f",&sal2);
	scanf("%f",&sal3);
	saldo_medio=(sal1+sal2+sal3)/3;
	if (saldo_medio<0){
		printf("\n Cliente: %s", nome);
		printf("\n Seu saldo médio é: %.2f",saldo_medio);
		printf("\n Prezado cliente, entrar em contato com seu gerente de conta!\n");
	} else{ if (saldo_medio>=0&&saldo_medio<=200){
					printf("\n Cliente: %s", nome);
					printf("\n Seu saldo médio é: %.2f",saldo_medio);
					printf("\n Nenhum Crédito");
		}else{ if (saldo_medio>200.1&&saldo_medio<=400){
					printf("\n Cliente: %s", nome);
					printf("\n Seu saldo médio é: %.2f",saldo_medio);
					printf("\n Seu crédito é no valor de: %.2f",saldo_medio*0.2);
			}else{ if (saldo_medio>400.1&&saldo_medio<=600){
					printf("\n Cliente: %s", nome);
					printf("\n Seu saldo médio é: %.2f",saldo_medio);
					printf("\n Seu crédito é no valor de: %.2f",saldo_medio*0.3);
				}else{ if (saldo_medio>600.1){
				printf("\n Cliente: %s", nome);
					printf("\n Seu saldo médio é: %.2f",saldo_medio);
					printf("\n Seu crédito é no valor de: %.2f",saldo_medio*0.4);	
						}
					}
			}	
		}
	}
}
