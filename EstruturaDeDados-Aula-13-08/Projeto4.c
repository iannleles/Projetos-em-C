/* 4- Fa√ßa um programa que converta uma temperatura em graus 
Celsius para Fahrenheit e Kelvin.
  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  float c, f, k;
  printf("Digite a temperatura em graus Celsius ");
  scanf("%f", &c);
  f = (9 * c + 160) / 5;
  k = c + 273;
  printf("A temperatura de %.2f∞C em Fahrenheit È %.2f∞F e Kelvin È %.2fK.", c, f, k);
  getch();
  return 0;
}