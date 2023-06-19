#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

//creaate function to find length
int length(char *str)
{
    int i = 0;
  
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main() {

char str[12];
  //enter string
printf("Enter text:");
gets(str);
//call function
printf("%d", length(str));


    return 0;
}


