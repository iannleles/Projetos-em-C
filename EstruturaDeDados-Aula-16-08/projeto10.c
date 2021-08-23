/*10-Fazer um programa que calcule uma equação do 2º grau e determine 
se suas raízes são reais e diferentes, reais e iguais ou não possui raízes.  */

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
        printf("Possui duas raízes reais e diferentes que são x1=%.2f e x2=%.2f", x1, x2);
    }
    else if (delta == 0)
    {
        printf("Possui duas raízes reais e iguais que são x1=%.2f e x2=%.2f", x1, x2);
    }
    else
    {
        printf("Não possui raízes reais");
    }
    getch();
    return 0;
}
