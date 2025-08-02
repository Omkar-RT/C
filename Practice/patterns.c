#include <stdio.h>

int main()
{

    int n = 3;
    for (int i = 0; i < n; i++)
    {
        /* this loop runs from 0-2
        if i=0 --> print 1 star
        if i=1 --> print 3 star
        if i=2 --> print 5 star
        no os stars = (2*i+1)*/

        for (int j = 0; j < 2 * i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}