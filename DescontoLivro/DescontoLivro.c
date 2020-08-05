#include <stdio.h>
#include <stdlib.h>]
#include <locale.h>

main ()
{
	float ValorLivro, Desconto; 
	
	printf("Digite o valor do livro: ");
	scanf("%f", &ValorLivro);
	
	if (ValorLivro <= 10.00)
	{
		Desconto = ValorLivro * 0.08;
	}
	else 
	{
		if(ValorLivro <= 60.00)
		{
			Desconto = ValorLivro * 0.10;
		}else
		{
			Desconto = ValorLivro * 0.20;
		}
	}
	setlocale(LC_ALL,"portuguese");
	printf("\n\nO valor do desconto é: R$ %.2f\n\n", Desconto);
}
