/* Faça um programa que leia dois números inteiros e exiba o resto da divisão do primeiro pelo segundo. */

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro número inteiro: ");
    scanf("%d", &num2);

    printf("O resto da divisão de %d e %d é %d.", num1, num2, num1 % num2);

    return 0;
}