/*37) Fa�a um programa que l� um vetor de 3 elementos e uma matriz de 3 x 3 
elementos. Em seguida o programa deve fazer a multiplica��o do vetor pelas 
s da matriz. */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, j;
    float vet[3], m[3][3];
    printf("Informe os elementos do vetor\n ");
    for (i = 0; i < 3; i++)
    {
        printf("Digite um n�mero ");
        scanf("%f", &vet[i]);
    }
    printf("\n\nInforme os elementos da matriz\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite um n�mero ");
            scanf("%f", &m[i][j]);
        }
    }
    printf("\n\nO vetor �\n ");
    for (i = 0; i < 3; i++)
    {
        printf("%.2f\t", vet[i]);
    }
    printf("\n\nA matriz �\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.2f\t", m[i][j]);
        }
        printf("\n");
    }
    printf("\n\nA matriz multiplicada pelo vetor �\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m[i][j] = vet[i] * m[i][j];
            printf("%.2f\t", m[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}