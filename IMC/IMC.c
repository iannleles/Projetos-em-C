#include <stdio.h>
#include <stdlib.h>

main ()
{
	float imc, peso, altura;
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("O seu imc eh: %.2f\n\n", imc);
	
	system("PAUSE");
	
}

