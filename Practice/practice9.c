#include <stdio.h>
#include <string.h>

typedef struct vector
{
    int r;
    int i;

} Complex;

void display(Complex c)
{
    printf("the value of complex number is %d + %di \n", c.r, c.i);
}

int main()
{
    Complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter real part \n");
        scanf("%d", &carr[i].r);
        printf("enter imaginary part \n");
        scanf("%d", &carr[i].i);
        display (carr[i]);
    }

    return 0;
}