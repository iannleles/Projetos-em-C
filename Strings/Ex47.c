/*
Faça um programa que leia a variável
“UNINOVE”, mostre a quantidade de
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
    printf("O conteúdo da variável é %s\n ", nome1);
    printf("O tamanho da variável é %d\n ", strlen(nome1));
    printf("O tamanho do vetor que armazena essa variável é %d\n ", strlen(nome1) + 1);
    getch();
    return 0;
}