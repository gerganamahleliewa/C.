#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
int totalCharacters(char alpha);

int main() {

   char a;

    printf("Enter alpha:");
    scanf("%c",&a);

  //printf count of alpha
    printf("count=%d", totalCharacters(a));



    return 0;
}

int totalCharacters(char alpha)
{
    char input;
    printf("Enter character:");
  //take a single input
    getchar();
    scanf("%c",&input);


    if(input == '$') {
        return 0;
    }

    if(input == alpha)
        return 1 + totalCharacters( alpha);
    return totalCharacters(alpha);
}

