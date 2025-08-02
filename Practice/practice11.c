#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=10,a=5;;
    int *ptr;
   ptr = (int *)malloc(n *sizeof(int));

   for (int i = 0; i < n; i++)
   {
    ptr[i] = a * (i+1);
   }
   printf("the array ia \n");
   
   for (int i = 0; i < n; i++)
   {
    /* code */ printf("%d\n",ptr[i]);
   }

n= 20;
a=7;
ptr= (int*)realloc(ptr,10*sizeof(int));
printf("the array is \n");

   for (int i = 0; i < n; i++)
   {
    ptr[i] = a * (i+1);
   }
   printf("the array ia \n");
   
   for (int i = 0; i < n; i++)
   {
    /* code */ printf("%d\n",ptr[i]);
   }

    
return 0;
}