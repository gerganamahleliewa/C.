#include <stdio.h>
//#include <math.h>
//#include <ctype.h>
#include <string.h>
#include <stdlib.h>
//#include <stdbool.h>
//#include <assert.h>
//#include <complex.h>
//#include <setjmp.h>

//function to find prime numebrs
int prime(int num)
{
    if(num < 0) {//only positive numbers
        return 0;
    }

    for ( int i=2; i<=num/2; i++ )
    {
      //if num is divisibe by i is not prime number
        if (num % i == 0)
        {
            return 0;
        }
    }
return 1;

}

int even(int num)
{
  
    if(num % 2 == 0){
          return 0; 
    }
    return 1;
}

int main(){

    FILE *fp;
    int num;
    fp = fopen("C:\\Users\\gmahlelieva\\Documents\\Clion\\myFile.txt","r");

    if(fp == NULL)
    {
        printf("Open Error...");
        exit(1);
    }
  
//read form file integer
    while (fscanf(fp,"%d",&num) != -1)
    {
        if(prime(num))
            printf("Prime number found: %d\n", num);
        else if(even(num))
            printf("Odd number found :%d\n",num);
        else{
            printf("Even number found :%d\n",num);
        }
    }


    fclose(fp);
    return 0;
}
