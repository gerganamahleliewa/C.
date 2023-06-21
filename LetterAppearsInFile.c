#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>



int main() {

//create file pointer
   FILE *ptr;
//open file
   ptr=fopen("C://Users//gmahlelieva//Documents//Clion//myFile.txt","r");
//create count array
   int countLetters[26] = { 0 };
   char character;


   if(ptr == NULL)
   {
       printf("Text Error!");
   }

   while(!feof(ptr))
   {
       character = fgetc(ptr);
     //check if letters in file are lowercase
       if(character >= 'a' && character <= 'z')
       {
           countLetters[character - 97]++;
       }

   }
  //print result for every one letter
   for(int i = 0 ; i < 26;++i)
   {
       printf("Letter %c is appears %d\n",i + 97,countLetters[i]);
   }


    fclose(ptr);

    return 0;
}
