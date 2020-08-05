#include <stdio.h>
#include <stdio.h>

main ()
{
	float brancos, nulos, validos, soma, B, C, D;
	
	printf("Digite a quantidade de votos Validos: ");
	scanf("%f", &validos);
	printf("Digite a quantidade de votos Brancos: ");
	scanf("%f", &brancos);
	printf("  Digite a quantidade de votos Nulos: ");
	scanf("%f", &nulos);
	
	soma = validos + brancos + nulos;
	
	B = (validos / soma) * 100;
	
	C = (brancos / soma) * 100;
		
	D = (nulos / soma) * 100;
	
	printf("\n\nO percentual de votos VALIDOS eh: %2.2f%%\n", B);
	printf("O percentual de votos BRANCOS eh: %2.2f%%\n", C);
	printf("  O percentual de votos NULOS eh: %2.2f%%\n\n", D);
	
	system("PAUSE");
	
	
	
	
	
}
