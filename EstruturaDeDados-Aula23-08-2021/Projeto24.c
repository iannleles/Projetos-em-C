/*24- Fa�a um programa que receba 10 valores aleat�rios do tipo inteiro. 
O programa deve verificar e mostrar na tela: (Utilize: for)
- O total de n�meros que est�o entre 15 e 35.
- O total de n�meros que est�o fora do intervalo acima.  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, qtdd = 0, qtdf = 0, cont;
    for (cont = 1; cont <= 10; cont++)
    {
        printf("Digite um n�mero inteiro ");
        scanf("%d", &n);
        if (n > 15 && n < 35)
        {
            printf("O n�mero %d est� dentro do intervalo entre 15 e 35.\n", n);
            qtdd = qtdd + 1;
        }
        else
        {
            printf("O n�mero %d est� fora do intervalo entre 15 e 35.\n", n);
            qtdf = qtdf + 1;
        }
    }
    printf("\n\nA quantidade de n�meros dentro do intervalo entre 15 e 35 � %d", qtdd);
    printf("\n\nA quantidade de n�meros fora do intervalo entre 15 e 35 � %d", qtdf);
    getch();
    return 0;
}
