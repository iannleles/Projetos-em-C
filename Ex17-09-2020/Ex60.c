/*60 = Qual é o valor de Y que será ikmpresso ao final do programa abaixo? */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
    int y, *p, x;

    y = 0;

    p = &y;

    x = *p;

    x = 5;

    *p = *p + 1;

    x--;

    *p = *p + x;

    printf("y = %d\n", y);
}