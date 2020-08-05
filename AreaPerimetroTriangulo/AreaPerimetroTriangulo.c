#include <stdio.h>
#include <stdlib.h>

main ()
{
	int altura, base, area, perimetro;
	
	printf("Digite o valor de altura do triangulo ");
	scanf("%d", &altura);
	printf("Digite o valor de base do triangulo ");
	scanf("%d", &base);
	
	area = base * altura;
	
	perimetro = (2 * base) + (2 * altura);
	
	printf("\nO valor da area do triangulo eh %d \nO valor do perimetro do triangulo eh %d\n", area, base);
	
	system("PAUSE");
	
}
