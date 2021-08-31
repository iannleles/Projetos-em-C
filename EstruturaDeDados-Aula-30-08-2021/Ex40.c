/*40) Criar um algoritmo que leia os elementos de uma matriz inteira de 3 x 3 e 
imprimir todos os elementos, exceto os elementos da diagonal principal.  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, j, m[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite um número inteiro ");
            scanf("%d", &m[i][j]);
        }
    }
    printf("\n\nA matriz é\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    printf("\n\nA matriz sem a diagonal principal é\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i != j)
            {
                printf("%d", m[i][j]);
            }
            printf("\t");
        }
        printf("\n");
    }
    getch();
    return 0;
}