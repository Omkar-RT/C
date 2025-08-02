#include <stdio.h>

int mystrlen(char str[])
{
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}

void mystrcpy(char target[], char source[])
{
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';
}

int main()
{
    char c = 'h';
    int count = 0;
    char source[] = "hey b!tchhhh";
    char target[30];
    mystrcpy(target, source);
    printf("%s, %s\n", source, target);

    // to count number of occurences of a letter in a string
    for (int i = 0; i < mystrlen(source); i++)
    {
        if (source[i] == c)
        {
            count++;
        }
    }

    printf("%d\n", count);


    return 0;
}