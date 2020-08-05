#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	int Num, Res;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &Num);
	
	Res = Num % 3;
	
	setlocale(LC_ALL,"portuguese");
	
	if (Num == 0)
	{
		printf("\nO numero é igual a zero\n");
	}else {
		if (Res == 0)
		{
			printf("\nO numero é multiplo de 3\n");
		}else {
			printf("\nO numero não é multiplo de 3\n");
		}
	}
}
