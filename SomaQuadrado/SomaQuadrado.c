#include <stdio.h>
#include <stdio.h>

main ()
{
	int a,b,c, qa,qb,qc, soma;
	
	printf("Digite os valores de A, B, C: ");
	scanf("%d%d%d", &a, &b, &c);
	
	qa = a * a;
	qb = b * b;
	qc = c * c;
	soma = qa + qb + qc;
	
	printf("\n\nOs valores ao quadrado eh: A: %d B: %d C: %d", qa, qb, qc);
	printf("\n\nA soma do quadrado dos valores eh: %d\n\n", soma);
	
	system("PAUSE");
	
}
