/* 17-	Calcular a m�dia aritm�tica de 3 notas de 3 alunos. Mostrar
se o aluno est� aprovado ou reprovado. Para ser aprovado tem que ter m�dia
maior ou igual a 6. (Utilize: while) */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, media;
    int aluno = 1;
    // aluno=0
    //while (aluno<3) ou (aluno<=2)
    while (aluno <= 3)
    {
        // 1<=3 => V => entra no loop
        // 2<=3 => V => entra no loop
        // 3<=3 => V => entra no loop
        // 4<=3 => F => sai do loop
        printf("Digite a primeira nota ");
        scanf("%f", &n1);
        printf("Digite a segunda nota ");
        scanf("%f", &n2);
        printf("Digite a terceira nota ");
        scanf("%f", &n3);
        media = (n1 + n2 + n3) / 3;
        printf("Sua m�dia � %.2f", media);
        if (media >= 6)
        {
            printf("\nVoc� est� aprovado!!!\n\n");
        }
        else
        {
            printf("\nVoc� est� reprovado!!!\n\n");
        }
        aluno++;
        //aluno=aluno+1
        //aluno=1+1=2 sobe
        //aluno=2+1=3 sobe
        //aluno=3+1=4 sobe
    }
    getch();
    return 0;
}
