#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main() {

   char str[10];
    printf("Enter str:");
    gets(str);

    int flag=0;
//found size of string
    int size= strlen(str);

    for(int i= 0;i<=size/2;++i)
    {
      //check zero index with last index in string and if they are not equal, string is palindrome 
        if(str[i]!=str[size-i-1])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("It is palindrome!");
    }
    else if(flag==1)
    {
        printf("It is NOT palindrome!");
    }
    return 0;
}


