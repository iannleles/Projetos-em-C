#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	int num;
	setlocale(LC_ALL,"portuguese");
	printf("Digite o numero: ");
	scanf("%d", &num);
	if (num % 1 == 0 && num % num == 0 && num % 2 != 0 ){
		printf("numero primo");	
	}else{
	
		printf("numero não é primo");
	}
}

