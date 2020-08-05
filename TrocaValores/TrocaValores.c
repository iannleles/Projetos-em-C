#include <stdio.h>
#include <stdio.h>

main ()
{
	int p, q, aux;
	
	printf("Digite o valor de P: ");
	scanf("%d", &p);
	printf("Digite o valor de Q: ");
	scanf("%d", &q);
	
	aux = p;
	p = q;
	q = aux;
	
	printf("\n\nO valor de P eh: %d  \n\nO valor de Q eh: %d\n\n", p, q);
	
	system("PAUSE");
	
	
	
}
