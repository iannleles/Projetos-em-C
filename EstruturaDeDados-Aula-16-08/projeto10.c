/*10-Fazer um programa que calcule uma equa��o do 2� grau e determine 
se suas ra�zes s�o reais e diferentes, reais e iguais ou n�o possui ra�zes.  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, x1, x2, delta;
    printf("Digite o valor de a ");
    scanf("%f", &a);
    printf("Digite o valor de b ");
    scanf("%f", &b);
    printf("Digite o valor de c ");
    scanf("%f", &c);
    delta = pow(b, 2) - 4 * a * c;
    x1 = (-b - sqrt(delta)) / 2 * a;
    x2 = (-b + sqrt(delta)) / 2 * a;
    if (delta > 0)
    {
        printf("Possui duas ra�zes reais e diferentes que s�o x1=%.2f e x2=%.2f", x1, x2);
    }
    else if (delta == 0)
    {
        printf("Possui duas ra�zes reais e iguais que s�o x1=%.2f e x2=%.2f", x1, x2);
    }
    else
    {
        printf("N�o possui ra�zes reais");
    }
    getch();
    return 0;
}
