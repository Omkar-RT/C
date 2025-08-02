#include <stdio.h>

// function to calculate force by mass

float force(float);

float force(float mass)
{
    return mass * 9.8;
}

// sum of natural numbers by function

int sum_n(int);

int sum_n(int n){

if(n==1){
    return 1;
}
return sum_n(n-1)+n;
}

int main()
{
    int m = 45;
    //printf("the force value is %.2f\n", force(m));
     
     int n=4;
     printf("the sum is %d\n", sum_n(n));
  
  // sum of n numbers by loop
  int sum=0;
for(int i=0; i<=n; i++){
          
          sum+=i;
}
printf("the sum is %d\n",sum);


    return 0;
}