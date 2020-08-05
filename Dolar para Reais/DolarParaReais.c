#include <stdio.h>
#include <stdlib.h>

main ()
{
	float dolar, convert;
	
	printf("digite o valor em dolar $ ");
	scanf("%f", &dolar);
	
	convert = dolar * 4.07;
	
	printf("O valor em reais eh R$ %.2f\n\n", convert);
	
	system("PAUSE");
	
	
}
