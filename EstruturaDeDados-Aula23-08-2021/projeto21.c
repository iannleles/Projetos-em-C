/* 21- Fa�a um programa que apresente um menu de op��es conforme especificado 
abaixo, mostre na tela a op��o escolhida, saindo apenas quando for digitado 
o n�mero cinco. (Utilize: do...while)
Menu de op��es
1.Incluir
2. Consultar
3. Alterar
4. Imprimir
5. Sair
Digite a op��o:
 */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a;
    do
    {
        printf("\nMenu de op��es:\n1-incluir\n2-Consultar\n3-Alterar\n4-Imprimir\n5-Sair\n");
        printf("Sua op��o � \n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            printf("1-Incluir\n");
            break;
        case 2:
            printf("2-Consultar\n");
            break;
        case 3:
            printf("3-Alterar\n");
            break;
        case 4:
            printf("4-Imprimir\n");
            break;
        case 5:
            printf("5-Sair\n");
            break;
        default:
            printf("Op��o inv�lida\n");
        }
    } while (a != 5);
    getch();
    return 0;
}