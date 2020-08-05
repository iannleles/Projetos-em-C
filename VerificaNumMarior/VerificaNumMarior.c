#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	int m, n;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &m);
	printf("Digite o segundo numero: ");
	scanf("%d", &n);
	
	setlocale(LC_ALL,"portuguese");
	
	if (m == n)
	{
		printf("\nOs numero digitados são iguais");
	}else {
			if (m<n)
			{
				printf("\nO numero %d digitado é o maior\n", n);
			}else
			{
				printf("\nO numero %d ditado é o maior\n", m);
			}
		
	}
	
	

	
	
}
