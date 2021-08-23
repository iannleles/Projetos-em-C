/* Faça um programa que verifique entre os 100 primeiros numeros quais sao multiplos de 4 e 6 ao mesmo tempo calcule a media.. (do...while) */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num = 1;
    int media = 0;
    int qtd = 0;
    do
    {

        if (num % 4 == 0 || num % 6 == 0)
        {
            printf("Numero %d \n", num);
            media += num;
            qtd++;
        }
        num++;
    } while (num < 101);

    printf("Media %d ", media / qtd);

    getch();
    return 0;
}