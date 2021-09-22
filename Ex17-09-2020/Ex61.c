/* 61 - Quais s]ao os valores que serão impressos no programa abaixo? */

int main()
{
    int *x, *y, *z;

    x = (int *)malloc(sizeof(int));
    y = (int *)malloc(sizeof(int));
    *x = 27;
    *y = 43;
    printf(" *x=%d *y=%d \n\n", *x, *y);
    *x = 71;
    *y = 55;
    z = y;
    y = x;
    printf(" *x=%d *y=%d *z=%d \n\n", *x, *y, *z);
    //
    x = z;
    printf(" *x=%d *y=%d *z=%d \n\n", *x, *y, *z);
    //
    free(x);
    free(y);
}