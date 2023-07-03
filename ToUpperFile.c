#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <complex.h>
#include <setjmp.h>


int main()  {

  //file pointer for file where we read information
    FILE *ptr;

    ptr = fopen("C:\\Users\\gmahlelieva\\Documents\\Clion\\myFile.txt","r");

    if(ptr == NULL)
    {
        printf("Error!");
    }
  
//new file pointer for writing in temporary file
    FILE *p;
    p = fopen("C:\\Users\\gmahlelieva\\Documents\\Clion\\temp.txt","w");
    if(p == NULL)
    {
        printf("Error with writing!");
        fclose(ptr);
    }
    char ch ;
    //repeat till end of file
    while ((ch = fgetc(ptr))!= EOF) {
        if (isupper(ch)) {
            ch = tolower(ch);
        }
        else if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, p);
    }

  //close files
    fclose(ptr);
    fclose(p);

    return 0;
}
