/*
Fa�a um programa que leia a vari�vel
�UNINOVE�, mostre a quantidade de
caracteres e o tamanho do vetor.
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome1[] = {"UNINOVE"};
    printf("O conte�do da vari�vel � %s\n ", nome1);
    printf("O tamanho da vari�vel � %d\n ", strlen(nome1));
    printf("O tamanho do vetor que armazena essa vari�vel � %d\n ", strlen(nome1) + 1);
    getch();
    return 0;
}