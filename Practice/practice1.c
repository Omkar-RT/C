#include <stdio.h>

int main()
{

 // volume of cilender is pi*radius*height
    int r = 6;
    int h = 3;
    printf("the volume of cilender is : %f\n", 3.14 * r * r * h);

// celcius to fahrenheit

    float c = 37.0, f;

    f = (9.0 / 5.0) * c + 32;
    printf("fahrenheit is %f\n", f);

// Associativity OR Priority

    int a = 10;
    int b = 6;
    int d = 2;

    printf("the ans is %d\n", 3*b/2*a + 7*d);

    // 3*b/2*a + 7*2
    // 3*b/2*a + 14
    // 3*6/2*a + 14
    // 18/2*a + 14
    // 9*a + 14
    // 90 + 14
    // 104

 // type conversion/casting
    
    int n=45;
    float m=32.5;

    n=(int) m;
    printf("%d\n",n);

    return 0;
}