/*20- Faça um programa que receba 10 números inteiros positivos quaisquer, 
calcule e mostre na tela o dobro dos valores pertencentes ao intervalo: 
5<x<20. (do...while)  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, dobro, cont = 1;
    do
    {
        printf("Digite um número inteiro positivo ");
        scanf("%d", &a);
        if (a > 5 && a < 20)
        {
            dobro = 2 * a;
            printf("\nO dobro de %d é %d.\n", a, dobro);
        }
        cont++;
    } while (cont <= 10);
    getch();
    return 0;
}