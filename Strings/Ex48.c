/*
Faça um programa que contenha um vetor de
strings que armazene o nome dos seus cinco
melhores amigos e imprima os nomes
armazenados no vetor na ordem inversa de
digitação.
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#define qtd 5
#define letras 20
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[qtd][letras];
    int i;
    for (i = 0; i < qtd; i++)
    {
        printf("Digite o nome de seu amigo: ");
        gets(nome[i]);
    }
    printf("\nNomes na ordem inversa de digitação\n");
    for (i = qtd; i >= 0; i--)
    {
        printf(" %s\n", nome[i]);
    }
    getch();
    return 0;
}