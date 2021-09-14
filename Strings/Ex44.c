/*
Faça um programa que leia dois nomes,
compare-os e imprima se são iguais ou
diferentes
*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome1[50], nome2[50];
    printf("Digite seu nome ");
    gets(nome1);
    printf("Digite seu nome ");
    gets(nome2);
    if (strcmp(nome1, nome2) == 0)
    {
        printf("Os nomes são iguais. %s=%s", nome1, nome2);
    }
    else
    {
        printf("Os nomes são diferentes. %s<>%s", nome1, nome2);
    }
    getch();
    return 0;
}