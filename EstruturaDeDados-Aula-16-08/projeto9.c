/*9- Fa�a um programa que receba dois n�meros inteiros quaisquer 
e verifique se o primeiro � m�ltiplo do segundo. */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    printf("Digite um n�mero inteiro ");
    scanf("%d", &n1);
    printf("Digite um n�mero inteiro ");
    scanf("%d", &n2);
    if (n1 % n2 == 0)
    {
        printf("O n�mero %d � m�ltiplo do n�mero %d", n1, n2);
    }
    else
    {
        printf("O n�mero %d n�o � m�ltiplo do n�mero %d", n1, n2);
    }
    getch();
    return 0;
}