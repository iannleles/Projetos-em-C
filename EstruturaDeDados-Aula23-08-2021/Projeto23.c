/* 23- Fa�a um programa que receba um n�mero inteiro positivo qualquer, calcule e mostre na tela os numeros pares e a m�dia dos n�meros �mpares compreendidos entre 1 e o n�mero digitado. (utilize: for) */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, cont = 1, soma = 0, qtd = 0;

    printf("Digite um numero inteiro positivo qualquer: ");
    scanf("%d", &num);
    for (cont; cont < num; cont++)
    {
        if (cont % 2 == 0)
        {
            printf("Numero par: %d\n", cont);
        }
        else
        {
            soma += cont;
            qtd++;
        }
    }

    int result = soma / qtd;
    printf("M�dia dos n�meros impares: %d \n", result);
    getch();
    return 0;
}

// # include <stdio.h>
// # include <conio.h>
// # include <locale.h>

// int main(){
// 	setlocale(LC_ALL, "Portuguese");
// float media;
// int cont, soma=0, qtd=0,n;
// printf("Digite um n�mero inteiro positivo maior que 1 ");
// scanf("%d",&n);
// // n=10
// for(cont=1;cont<=n;cont++){
// 	//cont=1;1<=10 V
// 	//cont=2;2<=10 V
// 	//cont=3;3<=10 V
// 	if(cont%2==0){
// 		// if (1%2==0) F sai e entra no else
// 		// if (2%2==0) V entra 
// 		// if (3%2==0) F sai e entra no else ... at� o n� 10
// 		printf("O n�mero %d � par\n",cont);
// 		//  2 � par
// 	}
// 	else{
// 		soma=soma+cont;
// 		//soma=0+1=1
// 		//soma=1+3=4
// 		qtd=qtd+1;
// 		//qtd=0+1=1
// 		//qtd=1+1=2
// 	}
// }
// media=soma/qtd;
// printf("A m�dia dos %d n�meros �mpares compreendidos entre 1 e %d � %.2f.",qtd,n,media);
// 	getch();
// 	return 0;
// }