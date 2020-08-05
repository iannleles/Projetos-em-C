#include <stdio.h>
#include <stdio.h>

main ()
{
	float soma, custoFabrica, custoDist, impostos;
	
	printf("Digite o valor de fabrica em reais R$ ");
	scanf("%f", &custoFabrica);
	
	custoDist = 0.28 * custoFabrica;
	impostos = 0.45 * custoFabrica;
	
	soma = custoFabrica + custoDist + impostos;
	
	printf("\nO valor final do consumidor sera de R$ %2.2f\n\n", soma);
	
	system("PAUSE");
	 
}
