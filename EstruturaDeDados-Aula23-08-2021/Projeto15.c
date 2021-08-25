/*15-	 Faça um programa que leia três números inteiros, sendo que o 
primeiro corresponde a um código e os outros dois correspondem a 
operando para o cálculo do produto notável entre os mesmos com base 
na tabela abaixo: (SWITCH...CASE)
teste: a= 7 e b=2 1-25; 2-81; 3-53; 4-45; 5-45

CÓDIGO	PRODUTO NOTÁVEL						FÓRMULA
1		Quadrado da diferença			x=(a - b)*(a - b)
2		Quadrado da soma				(a + b)*(a + b)
3		Soma do quadrado				(a*a)+(b*b)
4		Diferença do quadrado			(a*a)-(b*b)
5		Produto da soma pela diferença 	(a + b)*(a - b)

  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cod, a, b, x;
    printf("Escolha a opção desejada:\n1-Quadrado da diferença\n2-Quadrado da soma\n");
    printf("3-Soma do quadrado\n4-Diferença do quadrado\n5-Produto da soma pela diferença ");
    printf("\n\nSua opção é: ");
    scanf("%d", &cod);
    printf("Digite o primeiro número ");
    scanf("%d", &a);
    printf("Digite o segundo número ");
    scanf("%d", &b);
    switch (cod)
    {
    case 1:
        x = (a - b) * (a - b);
        printf("O quadrado da diferença entre os números %d e %d é %d", a, b, x);
        break;
    case 2:
        x = (a + b) * (a + b);
        printf("O quadrado da soma entre os números %d e %d é %d", a, b, x);
        break;
    case 3:
        x = (a * a) + (b * b);
        printf("A soma do quadrado entre os números %d e %d é %d", a, b, x);
        break;
    case 4:
        x = (a * a) - (b * b);
        printf("A diferença do quadrado entre os números %d e %d é %d", a, b, x);
        break;
    case 5:
        x = (a - b) * (a + b);
        printf("O produto da soma pela diferença entre os números %d e %d é %d", a, b, x);
        break;
    default:
        printf("Número inválido");
    }
    getch();
    return 0;
}
