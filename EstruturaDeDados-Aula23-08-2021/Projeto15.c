/*15-	 Fa�a um programa que leia tr�s n�meros inteiros, sendo que o 
primeiro corresponde a um c�digo e os outros dois correspondem a 
operando para o c�lculo do produto not�vel entre os mesmos com base 
na tabela abaixo: (SWITCH...CASE)
teste: a= 7 e b=2 1-25; 2-81; 3-53; 4-45; 5-45

C�DIGO	PRODUTO NOT�VEL						F�RMULA
1		Quadrado da diferen�a			x=(a - b)*(a - b)
2		Quadrado da soma				(a + b)*(a + b)
3		Soma do quadrado				(a*a)+(b*b)
4		Diferen�a do quadrado			(a*a)-(b*b)
5		Produto da soma pela diferen�a 	(a + b)*(a - b)

  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cod, a, b, x;
    printf("Escolha a op��o desejada:\n1-Quadrado da diferen�a\n2-Quadrado da soma\n");
    printf("3-Soma do quadrado\n4-Diferen�a do quadrado\n5-Produto da soma pela diferen�a ");
    printf("\n\nSua op��o �: ");
    scanf("%d", &cod);
    printf("Digite o primeiro n�mero ");
    scanf("%d", &a);
    printf("Digite o segundo n�mero ");
    scanf("%d", &b);
    switch (cod)
    {
    case 1:
        x = (a - b) * (a - b);
        printf("O quadrado da diferen�a entre os n�meros %d e %d � %d", a, b, x);
        break;
    case 2:
        x = (a + b) * (a + b);
        printf("O quadrado da soma entre os n�meros %d e %d � %d", a, b, x);
        break;
    case 3:
        x = (a * a) + (b * b);
        printf("A soma do quadrado entre os n�meros %d e %d � %d", a, b, x);
        break;
    case 4:
        x = (a * a) - (b * b);
        printf("A diferen�a do quadrado entre os n�meros %d e %d � %d", a, b, x);
        break;
    case 5:
        x = (a - b) * (a + b);
        printf("O produto da soma pela diferen�a entre os n�meros %d e %d � %d", a, b, x);
        break;
    default:
        printf("N�mero inv�lido");
    }
    getch();
    return 0;
}
