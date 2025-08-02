#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));
    // Generate a random number between 0 and RAND_MAX
    int random_number = (rand() % 100) + 1;
    int guess;
    int no_of_guess = 0;

    // Print the random number
    // printf("Random number: %d\n", random_number);

    do
    {
        printf("guess the number ");
        scanf("%d", &guess);
        if (guess > random_number)
        {
            printf("Lower number pleas!\n");
        }
        else if (guess < random_number)
        {
            printf("Higher number pleas!\n");
        }
        else
        {
            printf("Congo!\n");
        }
        no_of_guess++;

    } while (guess != random_number);

    printf("you guessed the number in %d guesses\n", no_of_guess);

    return 0;
}
