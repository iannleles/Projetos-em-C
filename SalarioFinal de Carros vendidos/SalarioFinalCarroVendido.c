#include <stdio.h>
#include <stdio.h>

main ()
{
	float ValorTotalVendas, SalarioFixo, ComissaoCarroVendido, soma, SalarioFinal, TotalComissaoCarroVendido;
	int NumCarrosVend;
	
	printf("Digite a quantidade de carros vendidos: ");
	scanf("%d", &NumCarrosVend);
	printf("Digite o valor total das vendas: R$ ");
	scanf("%f", &ValorTotalVendas);
	printf("Digite o salario fixo do vendedor: R$ ");
	scanf("%f", &SalarioFixo);
	printf("Digite o valor de comissao por carro vendido: R$ ");
	scanf("%f", &ComissaoCarroVendido);
	
	soma = 0.05 * ValorTotalVendas;
	
	TotalComissaoCarroVendido = ComissaoCarroVendido * NumCarrosVend; 
	
	SalarioFinal = soma + TotalComissaoCarroVendido + SalarioFixo;
	
	printf("\n\n  O vendedor vendeu %d carros \n\n  Ele devera receber como salario final o valor de R$ %.2f\n\n", NumCarrosVend, SalarioFinal);
	
	system("PAUSE");
	
	
}
