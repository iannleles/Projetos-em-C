/* 36) Fa�a um programa que l� uma matriz de 3 x 3 elementos usando um comando 
for, multiplica cada elemento por 5 e imprime o resultado. */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, j;
    float m[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite um n�mero ");
            scanf("%f", &m[i][j]);
        }
    }
    printf("\n\nA matriz �\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.2f\t", m[i][j]);
        }
        printf("\n");
    }
    printf("\n\nA matriz com os elementos multiplicados por 5 �\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m[i][j] = 5 * m[i][j];
            printf("%.2f\t", m[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
