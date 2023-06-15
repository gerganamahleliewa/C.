#include <stdio.h>
#include <math.h>
#include <ctype.h>

char toLower(char alpha)
{
  //check from ASCII table
    if(alpha >= 65  &&  alpha <= 90 )
    {
      //function include in \ctype.h
         return tolower(alpha);
    }
    else {
        return -1;
    }
}

int main() {
  
  //call function

    printf("%c",toLower('k'));

    return 0;

}
