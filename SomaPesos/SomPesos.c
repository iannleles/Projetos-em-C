#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	
	float peso1, peso2, soma;
	
	printf("Digite o pesoa da pessoa 1: ");
	scanf("%f", &peso1);
	printf("Digite o pesoa da pessoa 2: ");
	scanf("%f", &peso2);
	
	soma = peso1 + peso2;
	
	setlocale(LC_ALL,"portuguese");
	printf("O resultado da soma dos dois pesos é: %.2f", soma);
	
	system("pause>null");
}
