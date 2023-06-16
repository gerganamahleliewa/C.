#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main() {

   char name[50];
  
    printf("Enter your name:");
    fgets(name,50,stdin);
  
  //create count and it start with one, because on first word we do not have space
    int words = 1;
  
  //find lengthof string
    int length = strlen(name);

  //create loop
   for(int i = 0;i < length; ++i)
   {
     //check if equal to space
       if(name[i] == ' ')
       {
           words++;
       }
   }
  
    printf("Number of words in the string is: %d",words);
    return 0;
}


