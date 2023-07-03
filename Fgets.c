#include <stdio.h>
//#include <math.h>
//#include <ctype.h>
//#include <string.h>
#include <stdlib.h>
//#include <stdbool.h>
//#include <assert.h>
//#include <complex.h>
//#include <setjmp.h>
#define BUF 256



int main(){

    FILE *ptr;
    char str[100];
    ptr = fopen("C:\\Users\\gmahlelieva\\Documents\\Clion\\myFile.txt","w");

    if(ptr == NULL)
    {
        printf("File cannot be open...");
    }
  //print in file number from 1 to 10
    for(int i =0 ; i<= 10;++i)
    {
        fprintf(ptr,"The number is : %d\n",i);
    }
    fclose(ptr);

    FILE *f;
    f = fopen("C:\\Users\\gmahlelieva\\Documents\\Clion\\myFile.txt","r");

    if(f == NULL)
    {
        printf("File Error...");
    }

    while(!feof(f)){
        fgets(str,100,f);
        printf("%s",str);
    }

    fclose(f);

    return 0;
}
