#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>



int main() {

//create file pointer
   FILE *ptr;

  //opern file for reading
   ptr=fopen("C://Users//gmahlelieva//Documents//Clion//myFile.txt","r");



   if(ptr == NULL)
   {
       printf("Text Error!");
   }


   while(!feof(ptr))
   {
//print every character in file
       printf("%c", fgetc(ptr));
   }

    fclose(ptr);


    return 0;
}

