/*
Faça um programa que leia em duas variáveis
seu nome e sobrenome e imprima-os juntos.
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome1[50], nome2[50], mensagem[30];
    printf("Digite seu sobrenome ");
    gets(nome1);
    printf("Digite seu nome ");
    gets(nome2);
    strcat(nome2, nome1);
    strcpy(mensagem, nome2);
    printf("Seu nome é: %s", mensagem);
    getch();
    return 0;
}