/*7- Construa um algoritmo para calcular as raízes de uma equação do 2º grau (ax2 + bx + c) sendo que os valores a, b e c são fornecidos pelo usuário.


?=b^2-4*a*c
x=(-b±??)/(2*a)


Teste: a=1, b=-5, c=6, 
x1=2, x2=3

a=1; b=-4; c=4, 
x1=2, x2= 2

a=1; b= -2; c=4


 OBS: raiz quadrada = sqrt(delta)
potência = pow(base, expoente)*/

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
    printf("O valor de delta é %.2f\n\n", delta);
    printf("As raízes são x1=%.2f e x2=%.2f", x1, x2);
    getch();
    return 0;
}