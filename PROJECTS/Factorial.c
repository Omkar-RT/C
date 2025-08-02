#include<stdio.h>

int factorial();
      /*
      
      factorial(5)= 1x2x3x4x5
      factorial(4)= 1x2x3x4
      factorial(3)= 1x2x3x4x5
      factorial(n)= 1x2x3x ......x n-1 x n
      factorial(n-1)= 1x2x3x ......x n-1
      
      so factorial(n)=factorial(n-1) x n
      
      */

int factorial(int n){
    if(n == 1 || n == 0){  // base condition
        return 1;
    }
    
    return  factorial(n-1) * n;
}


int main(){

    int a=6;
    printf("the factorial of %d is %d",a, factorial(a));
    
return 0;
}