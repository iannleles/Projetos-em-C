/*24- Faça um programa que receba 10 valores aleatórios do tipo inteiro. 
O programa deve verificar e mostrar na tela: (Utilize: for)
- O total de números que estão entre 15 e 35.
- O total de números que estão fora do intervalo acima.  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, qtdd = 0, qtdf = 0, cont;
    for (cont = 1; cont <= 10; cont++)
    {
        printf("Digite um número inteiro ");
        scanf("%d", &n);
        if (n > 15 && n < 35)
        {
            printf("O número %d está dentro do intervalo entre 15 e 35.\n", n);
            qtdd = qtdd + 1;
        }
        else
        {
            printf("O número %d está fora do intervalo entre 15 e 35.\n", n);
            qtdf = qtdf + 1;
        }
    }
    printf("\n\nA quantidade de números dentro do intervalo entre 15 e 35 é %d", qtdd);
    printf("\n\nA quantidade de números fora do intervalo entre 15 e 35 é %d", qtdf);
    getch();
    return 0;
}
