#include <stdio.h>
#include <math.h>
#include <ctype.h>

//create function to find length of name
int LengthOfStr(char *name)
{

    int length=0,i=0;
    while(name[i]!='\0')
    {
        length++;
        i++;
    }
    return length;
}

int main() {

    char name[9];
  
    printf("Enter name:");
    gets(name);
  
    printf("%d",LengthOfStr(name));

    return 0;
}


