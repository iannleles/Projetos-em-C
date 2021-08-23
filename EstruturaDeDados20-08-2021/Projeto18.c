/* 18 - Escreva um programa que mostra todos os numeros pares de 2 até 50. (Utilize: While) */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num = 1;

    while (num <= 50)
    {

        if (num % 2 == 0)
        {
            printf("Numero %d \n", num);
        }
        num++;
    }

    getch();
    return 0;
}