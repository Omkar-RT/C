#include <stdio.h>

// fibonacci(n)= fibonacci(n-1) + fibonacci(n-2);

// 0 1 1 2 3 5 8 13 21 34 ...

int fibo(int);

int fibo(int n)
{

    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{

    int n = 5; // at 5th place the fibonaccoi value is 3
    printf("the value of fibonacci at %d is %d", n, fibo(n));

    return 0;
}