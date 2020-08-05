#include <stdio.h>
#include <stdlib.h>

main ()
{
	int Unidades_Vendidas;
	float Total_Vendas, Rendimento;
	
	printf("Digite a quantidade de produtos vendidos: ");
	scanf("%d", &Unidades_Vendidas);

	Total_Vendas = Unidades_Vendidas * 45.00;
	
	Rendimento = 0.09 * Total_Vendas + 150;
	
	printf("\nO rendimento do vendedor eh de R$ %.2f\n\n", Rendimento);
	
	system("PAUSE");
	
	
}
