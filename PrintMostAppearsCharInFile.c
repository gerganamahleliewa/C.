#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>



int main() {

//create file pointer
   FILE *ptr;
  
//file name
   ptr=fopen("C://Users//gmahlelieva//Documents//Clion//myFile.txt","r");
  
//count array
   int countLetters[26] = { 0 };
   char character;


   if(ptr == NULL)
   {
       printf("Text Error!");
   }

   while(!feof(ptr))
   {
       character = fgetc(ptr);
       if(character >= 'a' && character <= 'z')
       {
           countLetters[character - 97]++;
       }

   }
  
   int max=0;
  //search for most appeared letter in file
   for(int i = 0 ; i < 26;++i)
   {
       if(countLetters[i] > countLetters[max] )
       {
           max = i;
       }
   }
  
  //print result
    printf("Most appear character is %c",max+97);


    fclose(ptr);

    return 0;
}
