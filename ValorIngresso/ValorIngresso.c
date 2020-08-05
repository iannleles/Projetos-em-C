#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	int idade;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Qual sua idade?\n");
	scanf("%d", &idade);
	
	if(idade <= 10)
	{
	 	printf("\nValor do ingresso é: R$ 10,00\n");	
	 	
	}else 
	{
		if(idade <= 15)
		{
		printf("\nValor do ingresso é: R$ 15,00\n");	
		}else 
		{
			printf("\nO valor do ingresso será de R$20,00\n");	
		}	
	}	

}
