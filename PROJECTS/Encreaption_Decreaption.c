#include<stdio.h>
#include<string.h>

int main(){

    // encryption
    char str[]="kya bolte";

    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]+1;
    }

    printf("%s\n",str);
    
    //Decreaption
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]-1;
    }
    
    printf("%s\n",str);

return 0;
}