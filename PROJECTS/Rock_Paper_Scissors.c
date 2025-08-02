
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));
    // Generate a random number between 0 and RAND_MAX
    int comp = (rand() % 3);
    printf("%d", comp);

    return 0;
}