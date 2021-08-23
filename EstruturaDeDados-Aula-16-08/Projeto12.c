/*12-Fa�a um programa que controle o caixa de um hotel para recebimento de 
pagamento das di�rias de seus h�spedes. Para o c�lculo do valor a pagar, 
sabe-se que a di�ria � de R$ 95,00 e a taxa de servi�os � estipulada de 
acordo com o n�mero de di�rias, conforme o descrito abaixo:
	15% por dia, se o n�mero de di�rias for menor do que 10.
	10% por dia, se o n�mero de di�rias for igual a 10.
	5% por dia, se o n�mero de di�rias for maior que 10.
  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    float d = 95, total, taxa;
    printf("Digite o n�mero de di�rias ");
    scanf("%d", &n);
    if (n < 10)
    {
        taxa = 0.15 * n * d;
        total = n * d + taxa;
    }
    else if (n == 10)
    {
        taxa = 0.10 * n * d;
        total = n * d + taxa;
    }
    else
    {
        taxa = 0.05 * n * d;
        total = n * d + taxa;
    }
    printf("O n�mero de di�rias foi %d e a taxa de servi�os � R$ %.2f\n", n, taxa);
    printf("O valor total a ser pago � de R$ %.2f", total);
    getch();
    return 0;
}
