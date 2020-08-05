#include <stdio.h>
#include <stdlib.h>

main ()
{
	float fah, cel;
	
	printf("Digite a temperatura em fahrenheit: ");
	scanf("%f", &fah);
	
	cel = (fah - 32 ) *  5/9;
	
	printf("A temperatura em Celsius eh: %2.f C \n\n", cel);
	
	system("PAUSE");
	
}
