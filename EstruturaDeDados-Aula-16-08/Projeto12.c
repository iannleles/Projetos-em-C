/*12-Faça um programa que controle o caixa de um hotel para recebimento de 
pagamento das diárias de seus hóspedes. Para o cálculo do valor a pagar, 
sabe-se que a diária é de R$ 95,00 e a taxa de serviços é estipulada de 
acordo com o número de diárias, conforme o descrito abaixo:
	15% por dia, se o número de diárias for menor do que 10.
	10% por dia, se o número de diárias for igual a 10.
	5% por dia, se o número de diárias for maior que 10.
  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    float d = 95, total, taxa;
    printf("Digite o número de diárias ");
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
    printf("O número de diárias foi %d e a taxa de serviços é R$ %.2f\n", n, taxa);
    printf("O valor total a ser pago é de R$ %.2f", total);
    getch();
    return 0;
}
