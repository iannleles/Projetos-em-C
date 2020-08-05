#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
main ()
{

	
	float Peso, IMC, Altura;
	
	printf("Digite seu peso: ");
	scanf("%f", &Peso);
	printf("Digite qual a sua altura: ");
	scanf("%f", &Altura);
	
	IMC = Peso  / (Altura * Altura);
	
	setlocale(LC_ALL, "portuguese");
	if (IMC <= 18.5) 
	{
		printf("\n\nseu imc é %.2f\n\n", IMC);
		printf("Abaixo do peso\n\n");
		
	}else
	{
		
		if (IMC <= 24.9)
		{
			printf("\n\nseu imc é %.2f\n\n", IMC);
			printf("Peso ideal\n\n");
		}else 
		{
			printf("\n\nseu imc é %.2f\n\n", IMC);
			printf("Acima do peso\n\n");
		}
		
		
	}
	
	system("PAUSE");
	

}
