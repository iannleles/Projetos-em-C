/* Fa�a um programa que leia dois n�meros inteiros e exiba o resto da divis�o do primeiro pelo segundo. */

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro n�mero inteiro: ");
    scanf("%d", &num2);

    printf("O resto da divis�o de %d e %d � %d.", num1, num2, num1 % num2);

    return 0;
}