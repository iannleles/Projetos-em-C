/* 1- Faça um programa que leia dois valores reais e exiba o primeiro com acréscimo de 30%, e o segundo com  desconto de 25%.
ACRÉSCIMO => 30%
100%+30%=130%=130/100=1.30
acres=valor1*1.30
acres=valor1+valor1*30/100

DESCONTO
100%-25%=75%=75/100=0.75
DESC=VALOR2*0.75
DESC=VALOR2-VALOR2*25/100

*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    float valor1, valor2, acres, desc;

    printf("Digite o valor que vai sofrer o acr�scimo: ");
    // printf= saída = escreva
    scanf("%f", &valor1);
    //scanf = entrada = leia
    printf("Digite o valor que ocorrer� desconto: ");
    scanf("%f", &valor2);

    acres = valor1 * 1.30;
    desc = valor2 * 0.75;

    printf("O valor de R$ %.2f com um acr�scimo de 30%% � R$ %.2f\n", valor1, acres);
    printf("O valor de R$ %.2f com um desconto de 25%% � R$ %.2f", valor2, desc);

    getch();

    return 0;
}