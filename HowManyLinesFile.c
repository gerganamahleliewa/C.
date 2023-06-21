#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>



int main() {
//create file pointer
   FILE *ptr;
  
  //open file
   ptr = fopen("C://Users//gmahlelieva//Documents//Clion//myFile.txt","r");
  
  //create counter for new lines
   int count = 0;

   if(ptr == NULL)
   {
       printf("Text Error!");
   }


   while(!feof(ptr))
   {
     //get every character
       char file = fgetc(ptr);
     
     //and if character is equal to new line 
       if(file == '\n')
         count++;
   }
  //print how many new lines have
   printf("New line = %d",count);

    fclose(ptr);


    return 0;
}



