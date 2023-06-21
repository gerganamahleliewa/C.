#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>



int main() {

//create file pointer
   FILE *ptr;

  //open file
   ptr=fopen("C://Users//gmahlelieva//Documents//Clion//myFile.txt","w");

   int count = 0;

   if(ptr == NULL)
   {
       printf("Text Error!");
   }

    char text[20];
  
//write text from the user
    fgets(text,20,stdin);
  
//print in file
    fprintf(ptr,"%s",text);

 
    fclose(ptr);
  
//create new file pointer
    FILE *pt;
  //open same file for reading
    pt= fopen("C://Users//gmahlelieva//Documents//Clion//myFile.txt","r");
  
   if(pt == NULL)
   {
       printf("Text Error2!");
   }

    while(!feof(pt))
    {
      //count character
        fgetc(pt);
        count++;
    }
  //print result
    printf("Text in file is with length: %d",count-1);


    fclose(pt);

    return 0;
}



