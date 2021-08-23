/*11-Um cliente ao adquirir um determinado produto em uma loja, foi informado 
de que havia descontos progressivos conforme a quantidade de unidades compradas.
 O preço unitário é de R$ 75,00. Faça um programa que receba a quantidade de 
 produtos e apresente na tela o valor pago:
	sem desconto se a compra for menor que 10 unidades;
	desconto de 10% se a compra for acima de 10 unidades;
	desconto de 15% se a compra for acima de 40 unidades;
	desconto de 25% se a compra for acima de 100 unidades.  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    float pu = 75, vtotal;
    printf("Digite a quantidade de unidade compradas ");
    scanf("%d", &n);
    if (n < 10)
    {
        vtotal = n * pu;
    }
    else if (n < 40)
    {
        //if (n>=10 && n<40)
        vtotal = n * pu * 0.90;
        //vtotal=n*a-n*pu*0.10;
    }
    else if (n < 100)
    {
        vtotal = n * pu * 0.85;
    }
    else
    {
        vtotal = n * pu * 0.75;
    }
    printf("A quantidade de unidades compradas é %d.\nO valor total a ser pago é de R$%.2f.", n, vtotal);

    getch();
    return 0;
}