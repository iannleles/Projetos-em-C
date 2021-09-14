/* Faça um programa que leia e imprima uma
palavra qualquer. */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char palavra[10];
    printf("Digite uma palavra ");
    gets(palavra);
    printf("\n\nA palavra é: %s\n\n\n", palavra);
    getch();
    return 0;
}