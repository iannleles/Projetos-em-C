/*
Faça um programa que leia seu nome,
transfira-o para outra variável e o imprima.
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
    strcpy(nome2, nome1);
    printf("\n%s", nome2);
    getch();
    return 0;
}