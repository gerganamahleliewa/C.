#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>



int main() {

//create file pointer
   FILE *ptr;
  //open file for reading
   ptr=fopen("C://Users//gmahlelieva//Documents//Clion//myFile.txt","r");
  //counter every character in file
   int count=0;

  
   if(ptr == NULL)
   {
       printf("Text Error!");
   }

//check if is end of file
   while(!feof(ptr))
   {
     //get ona character from file
       fgetc(ptr);
       count++;
   }
  //print result
    printf("%d",count-1);
  
  //close file
    fclose(ptr);


    return 0;
}



