/*22- Faça um programa que calcule e imprima a média dos 50 primeiros 
múltiplos de 2 e 3 maiores que 999 e menores que 1300. (Utilize: for)  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float media;
    int cont, soma = 0, qtd = 0;
    for (cont = 1000; cont < 1300; cont++)
    {
        // cont = 1000
        if (cont % 2 == 0 && cont % 3 == 0)
        {
            //if(1000%2==0 && 1000%3==0){ V && F = F sai...
            //if(1002%2==0 && 1002%3==0){ V && V = V entra
            //if(1008%2==0 && 1008%3==0){ V && V = V entra
            printf("O número %d é multiplo de 2 e 3.\n", cont);
            soma = soma + cont;
            //soma=0+1002
            //soma=1002+1008=2010
            qtd = qtd + 1;
            // qtd=0+1=1
            // qtd=1+1=2
        }
    }
    media = soma / qtd;
    printf("A média dos 50 números entre 999 até 1300 múltiplos de 2 e 3 é %.2f", media);
    getch();
    return 0;
}