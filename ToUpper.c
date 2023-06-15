#include <stdio.h>
#include <math.h>
#include <ctype.h>

char toUpper(char alpha)
{
  //check from ASCII table
    if(alpha >= 97  &&  alpha <=122 )
    {
         return toupper(alpha);
    }
    else return -1;

}

int main() {

    printf("%c",toUpper('l'));

    return 0;

}
