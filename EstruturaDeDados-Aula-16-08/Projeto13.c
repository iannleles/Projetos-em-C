/*13-O programa deverá receber o número de dias de hospedagem de um cliente, 
calcular e apresentar na tela o valor da taxa e o total a ser pago.
	O perfil de uma pessoa é dado pelo seu ano de nascimento.
Exemplo: Se o ano é 1987, calculamos a soma 19+87, dividimos seu resultado por 
5 e pegamos o resto.
Este resto indica o perfil da pessoa: 0 - tímido, 1 - sonhador, 2 - paquerador, 3 - atraente, 4 - irresistível. Dado o ano de nascimento de uma pessoa, informe qual é o seu perfil.

  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, resto;
    printf("Digite os dois primeiros dígitos do ano de seu nascimento ");
    scanf("%d", &n1);
    printf("Digite os dois últimos dígitos do ano de seu nascimento ");
    scanf("%d", &n2);
    resto = (n1 + n2) % 5;
    printf("Seu perfil é de uma pessoa ");
    switch (resto)
    {
    case 0:
        printf("tímida");
        break;
    case 1:
        printf("sonhadora");
        break;
    case 2:
        printf("paqueradora");
        break;
    case 3:
        printf("atraente");
        break;
    case 4:
        printf("irresistível");
        break;
    }
    getch();
    return 0;
}