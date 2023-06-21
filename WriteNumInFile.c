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

   int num;

   if(ptr == NULL)
   {
       printf("Text Error!");
   }

//input number from user
    fscanf(stdin, "%d", &num);
  
  //and print in file
    fprintf(ptr,"Number = %d\nPower of number = %d", num, num * num);

    fclose(ptr);


    return 0;
}


